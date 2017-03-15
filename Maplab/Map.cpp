#include "Map.h"


Map::Map(std::string startingLocationName)
{
	CurrentLocation = new Location(startingLocationName);
}


Map::~Map()
{
}

string Location::getName()
{

}