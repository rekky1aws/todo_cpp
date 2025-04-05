#include <iostream>
#include <string>
#include <list>

using namespace std;

class TodoItem {
  private:
    int id;
    string description;
    bool completed;

  public:
    TodoItem() : id(0), description(""), completed(false) {}
    ~TodoItem() = default;

    int getId () {
      return id;
    }

    string getDesc () {
      return description;
    }

    bool isCompleted () {
      return completed;
    }

    void create (string newDesc) {
      description = newDesc;
    }

};

void dispMenu () {
  cout << "=== TODO ===\n";
  cout << "1. Consulter la liste.\n";
  cout << "\n0. Quitter.\n";
}

int dispList(list<TodoItem> list) {
  std::list<TodoItem>::iterator it;

  if (list.empty()) {
    cout << "La liste est vide pour le moment.\n";
    return 0;
  }

  for(it = list.begin(); it != list.end(); it++) {
    if (!it->isCompleted()) {
      cout << it->getId() << ". " << it->getDesc() << endl;
    }
  }
  return 0;
}


int main () {
  int choice = -1;
  list<TodoItem> todoItems;

  // DEBUG
  TodoItem testItem;
  testItem.create("Tache de test");
  todoItems.push_back(testItem);

  // END DEBUG

  todoItems.clear();

  do {
    dispMenu();
    cin >> choice;

    switch(choice) {
      case 1:
        dispList(todoItems);
        break;
    }

  } while (choice != 0);
}