#pragma once
#include "iElectronics.h"

class Appliances: virtual public IElectronics
{
	protected:
	unsigned _weight;

	public:
	Appliances();
	Appliances(unsigned);

	~Appliances() = 0;

	void showSpec()const override;
};
