#include "Tea.h"
#include <iostream>
using namespace std;

void Tea::prepareRecipe()
{
	boilWater();
	steepTeaBag();
	pourInCup();
	addLemon();
}

void Tea::boilWater()
{
	cout << "Boiling water" << endl;
}

void Tea::steepTeaBag()
{
	cout << "Steeping the tea" << endl;
}

void Tea::pourInCup()
{
	cout << "Pouring into cup" << endl;
}

void Tea::addLemon()
{
	cout << "Adding Lemon" << endl;
}