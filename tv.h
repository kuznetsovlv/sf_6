#pragma once
#include "appliances.h"

class TV final: public Appliances
{
	public:
	TV();
	TV(unsigned);

	void showSpec()const override;
};
