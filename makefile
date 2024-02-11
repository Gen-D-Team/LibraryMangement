LIBRARY := $(wildcard ./library/*.cpp)
CONTROLLER := $(wildcard ./controller/*.cpp)
GUI := $(wildcard ./UI/*.cpp)

main:
	cls
	@g++ $(GUI) main.cpp -o a.o
	@./a.o
	@del a.o