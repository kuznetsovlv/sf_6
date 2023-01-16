#pragma once
#include "device.h"
#include "appliances.h"

class Player: public Device, Appliances
{
	private:
	unsigned _totalTracks;

	public:
	Player();
	Player(unsigned);
	Player(unsigned, unsigned);
	Player(unsigned, unsigned, unsigned);

	void showTotalTracks()const;
	void showSpec()const override;
};
