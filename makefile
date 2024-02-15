LIBRARY := $(wildcard ./library/*.cpp)
BOOKS := $(wildcard ./books/*.cpp)
GUI := $(wildcard ./UI/*.cpp)

main:
	cls
	@g++ $(GUI) $(BOOKS) main.cpp -o a.o
	@./a.o
	@del a.o