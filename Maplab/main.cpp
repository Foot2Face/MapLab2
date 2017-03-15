#include <iostream>
#include <string>
#include "Map.h"
using namespace std;
int main()
{
	Map map = Map("Home");

	int choice = -1;
	while (choice != 0)
	{
		system("cls");
		cout << "Choose an option" << endl;
		cout << "0) Exit" << endl;
		cout << "1) Get Current Location Info" << endl;
		cout << "2) Go North" << endl;
		
		cin >> choice;

		switch (choice)
		{
		case 1: cout << map.CurrentLocation->getName() << endl; break; 
		case 2: GoNorth()
		default:
			break;
		}

		system("pause");
	}


	system("pause");
	return 0;
}

void GoNorth(Map &map)
{
	if (map.CurrentLocation->North == nullptr)
	{
		cout << "You have not been here before. Enter a Name: ";
		string newName;
		cin >> newName;

		map.CurrentLocation->North = new Location(newName);
		map.CurrentLocation->North->South = *&map.CurrentLocation;
	}
	map.CurrentLocation = map.CurrentLocation->North;
	cout << "You are now at " + map.CurrentLocation->getName() << endl;
	map.Path.push(map.CurrentLocation);
}

void GoSouth(Map &map)
{

}

void GoEast(Map &map)
{

}

void GoWest(Map &map)
{

}