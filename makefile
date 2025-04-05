all: compile exec

compile:
	@g++ todo.cpp -o todo.x

exec:
	@echo "------ Start ------"
	@./todo.x
	@echo "------- End -------"