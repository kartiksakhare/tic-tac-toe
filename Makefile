all: game

game: main.cpp src/Game.cpp
	g++ main.cpp src/Game.cpp -Iinclude -o game

clean:
	rm -f game