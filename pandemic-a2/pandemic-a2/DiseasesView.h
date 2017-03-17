#pragma once
#include "Observer.h"
#include "Diseases.h"
class DiseasesView : public Observer {
public:
	DiseasesView();
	DiseasesView(Diseases* s);
	~DiseasesView();
	void Update();
	void display();
private:
	Diseases *_subject;
};