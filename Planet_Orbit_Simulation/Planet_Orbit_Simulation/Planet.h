#pragma once
#include <iostream>
#include <list>

// Include only the class definition

class Planet
{
	std::string name = {};
	int mass = {};
	int radius = {};
	int colour = {};
	
	bool sun = false;
	int dist_to_sun = 0;

	using orbit = int;

	std::list<orbit> orbit{};

public:
	void update_posistion()
	{
		// complete the function for the planet position
	}

	void attraction()
	{
		// complete the function for the planetary atraction
	}
};

