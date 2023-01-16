#include <iostream>
#include "appliances.h"

Appliances::Appliances():Appliances(10)
{
}

Appliances::Appliances(unsigned weight):_weight(weight)
{
}

Appliances::~Appliances() = default;

void Appliances::showSpec()const
{
	std::cout << "Weight: " << _weight << "g." << std::endl;
}
