#pragma once

#include "Player.hpp"

class Computer : Player {
public:
	GameStatus DoTurn(Window&, void (*)(CellCoord, CellCoord, Window& window));
	Computer(GameMap&, const CellFlag, const Turn);
};

