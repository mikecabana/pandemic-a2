#pragma once
#include "Observer.h"
#include "ResearchStations.h"

class ResearchStationsView : public Observer {
public:
	ResearchStationsView();
	ResearchStationsView(ResearchStations* s);
	~ResearchStationsView();
	void Update();
	void display();
private:
	ResearchStations *_subject;
};