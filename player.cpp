#include <iostream>
#include "player.h"
#include "device.h"
#include "appliances.h"

Player::Player():Player(20)
{
}

Player::Player(unsigned totalTracks):Player(totalTracks, 0)
{
}

Player::Player(unsigned totalTracks, unsigned batteryLife):Player(totalTracks, batteryLife, 5)
{
}

Player::Player(unsigned totalTracks, unsigned batteryLife, unsigned weight):Appliances(weight), Device(batteryLife), _totalTracks(totalTracks)
{
}

void Player::showSpec()const
{
	std::cout << "Player. Battery life: " << _batteryLife << ". Total tracks: " << _totalTracks <<". Weight: " << _weight << " g." << std::endl;
}
