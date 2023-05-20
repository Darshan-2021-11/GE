CC = g++
FLAGS =-Wall -Werror -Wextra -Wshadow -Wpedantic -ggdb \
	-DGE_PLATFORM_WINDOWS \
	-I"../GE/src"
LIBS =-L"../GE/src/GE" -lGE

SandBox: SandBoxApp.o
	$(CC) -o SandBox SandBoxApp.o $(LIBS)

SandBoxApp.o: SandBoxApp.cpp
	$(CC) -c SandBoxApp.cpp $(FLAGS)
