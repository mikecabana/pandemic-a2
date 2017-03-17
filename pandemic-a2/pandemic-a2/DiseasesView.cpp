#include "DiseasesView.h"
#include "Diseases.h"
#include <iostream>

DiseasesView::DiseasesView(){
}

DiseasesView::DiseasesView(Diseases* s){
	_subject = s;
	_subject->Attach(this);
}

void DiseasesView::Update() {
	display();
}

void DiseasesView::display(){
	int red = _subject->getRedCubes();
	int blue = _subject->getBlueCubes();
	int yellow = _subject->getYellowCubes();
	int black = _subject->getBlackCubes();
	std::cout << "Red cubes : " << red << std::endl;
	std::cout << "Blue cubes : " << blue << std::endl;
	std::cout << "Yellow cubes : " << yellow << std::endl;
	std::cout << "Black cubes : " << black << std::endl;
}