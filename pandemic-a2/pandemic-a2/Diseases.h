#pragma once
#include "Subject.h"
class Diseases : public Subject {
public:
	Diseases();
	int getRedCubes();
	int getBlueCubes();
	int getYellowCubes();
	int getBlackCubes();
	void decreaseRedCubes();
	void decreaseBlueCubes();
	void decreaseYellowCubes();
	void decreaseBlackCubes();
	~Diseases();
private:
	int redCubes;
	int blueCubes;
	int yellowCubes;
	int blackCubes;
};