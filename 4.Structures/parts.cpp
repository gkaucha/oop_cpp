// parts.cpp
// uses parts inventory to demonstrate structure
#include<iostream>
using namespace std;

struct part		//declare a structure
{
	int modelnumber;	// Id number of widget
	int partnumber;		// ID number of widget part
	float cost;		// cost of part
};

int main()
{
	part part1;			// define a structure variables

	part1.modelnumber = 6244;	// give values to structure members
	part1.partnumber = 373;
	part1.cost = 217.55F;

	//display structure members
	cout << "Model " << part1.modelnumber;
	cout << ", part " << part1.partnumber;
	cout << ", costs $" << part1.cost << endl;

	return 0;
}


