#include "player.h"
#include "tv.h"
#include "laptop.h"
#include "iElectronics.h"
#include "store.h"

int main()
{
	Store store;

	store.addItem(new Player(70, 50));
	store.addItem(new Player());
	store.addItem(new TV());
	store.addItem(new TV(10));
	store.addItem(new Laptop());
	store.addItem(new Laptop(12));
	store.addItem(new Laptop(18, 5));

	unsigned index = 0;
	while(!store.empty())
	{
		IElectronics *item = store.getItem(index++);

		if(item)
		{
			item->showSpec();
			delete item;
		}
	}

	return 0;
}
