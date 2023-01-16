#pragma once
#include "iElectronics.h"

class Store final
{
	private:
	unsigned _capacity;
	IElectronics **_store;

	public:
	Store();
	Store(unsigned);

	~Store();

	bool empty()const;
	void addItem(IElectronics*);
	IElectronics *getItem(unsigned);
};
