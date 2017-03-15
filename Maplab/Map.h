#pragma once
#include "Location.h"
class Map
{
private:
	Location *CurrentLocation = nullptr;
public:
	Map(std::string startingLocationName);
	~Map();	
	
	std::string Location::getName();
};

