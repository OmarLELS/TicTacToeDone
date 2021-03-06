#pragma once

#include "GameMap.hpp"
#include "Window.hpp"
#include "Player.hpp"
#include "Computer.hpp"

enum GameMode {
	PVP_MODE,
	COMPUTER_MODE
};

class Game {
public:
	Game(GameMode, CellCoord = 19, CellCoord = 19, CellCoord = 5);

	void StartGame();

private:

	void DrawNet();
	void DrawWin(CellFlag flag);

	Window  window_;
	GameMap game_map_;
	GameMode game_mode_;

	Player player_first_;
	Player player_second_;
	Computer computer_;
};
