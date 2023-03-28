default: main.cpp
	clang++ main.cpp `pkg-config --libs --cflags raylib` -o pong.out -std=c++17	
