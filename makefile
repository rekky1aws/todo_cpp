all: compile exec
	echo "End of program"

compile:
	rm hello.x
	g++ hello.cpp -o hello.x

exec:
	./hello.x