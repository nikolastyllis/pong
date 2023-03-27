default: main.cpp
	clang++ main.cpp `pkg-config --libs --cflags raylib` -o terrain -std=c++17	
