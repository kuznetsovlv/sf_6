#include <iostream>
#include "laptop.h"
#include "device.h"
#include "appliances.h"

Laptop::Laptop():Laptop(12)
{
}

Laptop::Laptop(unsigned batteryLife):Laptop(batteryLife, 4)
{
}

Laptop::Laptop(unsigned batteryLife, unsigned weight):Device(batteryLife),Appliances(weight)
{
}

void Laptop::showSpec()const
{
	std::cout << "Laptop. Battery life: " << _batteryLife << " H. Weight: " << _weight << " kg." << std::endl;
}
