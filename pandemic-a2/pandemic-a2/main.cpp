#include "Diseases.h"
#include "DiseasesView.h"

#include "ResearchStations.h"
#include "ResearchStationsView.h"

#include <iostream>
#include <string>

int main() {
	Diseases *disease = new Diseases;
	Diseases *disease2 = new Diseases;

	ResearchStations *rs = new ResearchStations;

	DiseasesView *dview = new DiseasesView(disease);
	DiseasesView *dview2 = new DiseasesView(disease);

	ResearchStationsView *rsview = new ResearchStationsView(rs);

	std::string choice;
	std::string color;
	std::string retry;

	tryagain:
	std::cout << "Modify cubes or build a station (1/2/0 for exit) ; ";
	std::cin >> choice;
	if (choice == "1")
		goto cubes;
	else if (choice == "2")
		goto stations;
	else if (choice == "0")
		goto end;
	else{
		std::cout << "Wrong inut. Try again." << std::endl;
		goto tryagain;
	}

	cubes:
	std::cout << "Which color to infect?" << std::endl;
	std::cin >> color;
	if (color == "red"){
		disease->decreaseRedCubes();
		disease2->decreaseRedCubes();
		std::cout << std::endl;
		goto tryagain;
	}
	else if (color == "blue"){
		disease->decreaseBlueCubes();
		std::cout << std::endl;
		goto tryagain;
	}
	else if (color == "yellow"){
		disease->decreaseYellowCubes();
		std::cout << std::endl;
		goto tryagain;
	}
	else if (color == "black"){
		disease->decreaseBlackCubes();
		std::cout << std::endl;
		goto tryagain;
	}
	else{
		std::cout << "Wrong input. Try again." << std::endl;
		goto cubes;
	}

	stations:
	std::cout << "Station built" << std::endl;
	rs->decreaseStations();
	goto tryagain;
	
	end:
	system("pause");
	return 0;
}