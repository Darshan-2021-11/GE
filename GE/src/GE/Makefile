CC = g++
FLAGS =-Wall -Werror -Wextra -Wshadow -Wpedantic -ggdb -O3\
	   -I"../../vendor/spdlog/include" \
	   -DGE_PLATFORM_WINDOWS -DGE_BUILD_DLL

GE.dll: Application.o Log.o
	$(CC) -shared -o $@ $^ $(FLAGS)

Application.o: Application.cpp Application.h Core.h
	$(CC) -c -o $@ $< $(FLAGS)

Log.o: Log.cpp Log.h Core.h
	$(CC) -c -o $@ $< $(FLAGS)
