CC = g++
FLAGS =-Wall -Werror -Wextra -Wshadow -Wpedantic -ggdb -O3\
	   -DGE_PLATFORM_WINDOWS -DGE_BUILD_DLL

GE.dll: Application.o
	$(CC) -shared -o GE.dll Application.o

Application.o: Application.cpp Application.h Core.h
	$(CC) -c Application.cpp $(FLAGS)
