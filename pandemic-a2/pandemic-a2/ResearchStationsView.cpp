#include "ResearchStationsView.h"
#include <iostream>

ResearchStationsView::ResearchStationsView(){
}

ResearchStationsView::ResearchStationsView(ResearchStations* s){
	_subject = s;
	_subject->Attach(this);
}

void ResearchStationsView::Update() {
	display();
}

void ResearchStationsView::display(){
	int sta = _subject->getStations();
	if (sta > 0){
		std::cout << "Stations available : " << sta << std::endl;
	}
	else{
		std::cout << "No stations available." << std::endl;
	}
	
}