#pragma once
#include "iElectronics.h"

class Device: virtual public IElectronics
{
	protected:
	unsigned _batteryLife;

	public:
	Device();
	Device(unsigned);

	virtual ~Device() = 0;

	void showSpec()const override;
};
