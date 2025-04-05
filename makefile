all: compile exec

compile:
	@rm hello.x
	@g++ hello.cpp -o hello.x

exec:
	@echo "------ Start ------"
	@./hello.x
	@echo "------- End -------"