#pragma once
#include "appliances.h"
#include "device.h"

class Laptop final: public Appliances, Device
{
	public:
	Laptop();
	Laptop(unsigned);
	Laptop(unsigned, unsigned);

	void showSpec()const override;
};
