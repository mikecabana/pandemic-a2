#include "Diseases.h"

Diseases::Diseases() : redCubes(24), blueCubes(24), yellowCubes(24), blackCubes(24) {
}

Diseases::~Diseases() {
}

int Diseases::getRedCubes(){
	return redCubes;
}
int Diseases::getBlueCubes(){
	return blueCubes;
}
int Diseases::getYellowCubes(){
	return yellowCubes;
}
int Diseases::getBlackCubes(){
	return blackCubes;
}
void Diseases::decreaseRedCubes(){
	redCubes = redCubes - 1;
	Notify();
}
void Diseases::decreaseBlueCubes(){
	blueCubes = blueCubes - 1;
	Notify();
}
void Diseases::decreaseYellowCubes(){
	yellowCubes = yellowCubes - 1;
	Notify();
}
void Diseases::decreaseBlackCubes(){
	blackCubes = blackCubes - 1;
	Notify();
}
