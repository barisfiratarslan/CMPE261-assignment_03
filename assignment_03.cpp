// assignment_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>

// class of animal
class Animal {
	string Type; // string value of type
	string Climate; // string value of climate
	int eyeNo; //  integer number, indicates how many eye the animal would have
	int footNo; // integer number, indicates how many foot the animal would have.

public: 
	Animal(string Type, string Climate, int eyeNo, int footNo) { // constructor of animal
		this->Type = Type;
		this->Climate = Climate;
		this->eyeNo = eyeNo;
		this->footNo = footNo;
	}

	void info() { // to print information about animal
		cout << " ,Type is: " << Type << " ,Climate is: " << Climate << " ,Eye number is: " << eyeNo << " ,Food number is: " << footNo << endl;
	}
}; // end of the class

// class of zoo and inheriting of animal
class Zoo :public Animal {
	int id; // 5 digit integer value for name of the animal
	string food; // string variable shows what kind of food to give the animal
	string location; // string name of animal placement
	string animalType; // string value of animal type

public:
	Zoo(int id, string food, string location, string animalType, string Type, string Climate, int eyeNo, int footNo) :Animal(Type, Climate, eyeNo, footNo) { // constructor of zoo 
		this->id = id;
		this->food = food;
		this->location = location;
		this->animalType = animalType;
	}

	void info() { // to print information about zoo and animal
		cout << "ID is: " << id << " ,Food is: " << food << " ,Location is: " << location << " ,Animal Type is: " << animalType;
		Animal::info(); // to print information in animal class
	}
}; // en of the class

int main()
{
	// create three animals and print information of them
	Zoo z1(10001, "fish", "oceanic", "sea lion", "carnivore", "cold", 2, 4);
	Zoo z2(10002, "meat", "mountain", "bear", "omnivore", "average", 2, 4);
	Zoo z3(10003, "grass", "grassland", "gazella", "herbivore", "tropical", 2, 4);

	z1.info();
	z2.info();
	z3.info();

	return 0;
}
