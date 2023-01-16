#include <iostream>
#include "tv.h"
#include "appliances.h"

TV::TV():TV(5)
{
}

TV::TV(unsigned weight):Appliances(weight)
{
}

void TV::showSpec()const
{
	std::cout << "TV. Weight: " << _weight << " kg." << std::endl;
}
