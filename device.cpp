#include <iostream>
#include "device.h"

Device::Device():Device(0)
{
}

Device::Device(unsigned batteryLife):_batteryLife(batteryLife)
{
}

Device::~Device() = default;

void Device::showSpec()const
{
	std::cout << "Battery life: " << _batteryLife << std::endl;
}
