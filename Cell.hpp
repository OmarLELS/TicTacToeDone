#pragma once //include � ���� ����� ������������ ���� ���

enum CellFlag {
	UNUSED, 	  //���� � ������ �� 0, �� X
	PLAYER_FIRST, //���� � ������ X
	PLAYER_SECOND //���� � ������ 0
};

typedef unsigned char CellCoord;

class Cell {
public:
	Cell();

	void SetFlag(const CellFlag);
	CellFlag GetFlag();

private:
	CellFlag flag_;
};

