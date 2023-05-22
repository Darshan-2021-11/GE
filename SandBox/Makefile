CC = g++
FLAGS =-Wall -Werror -Wextra -Wshadow -Wpedantic -ggdb -O3 \
	-I"../GE/src" -I"../GE/vendor/spdlog/include/" \
	-DGE_PLATFORM_WINDOWS
LIBS =-L"../GE/src/GE" -lGE

SandBox: SandBoxApp.o
	$(CC) -o $@ $< $(FLAGS) $(LIBS)

SandBoxApp.o: SandBoxApp.cpp ../GE/src/GE.h
	$(CC) -c -o $@ $< $(FLAGS)
