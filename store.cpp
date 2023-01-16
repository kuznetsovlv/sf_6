#include "store.h"
#include "iElectronics.h"

Store::Store():Store(10)
{
}

Store::Store(unsigned capacity):_capacity(capacity)
{
	_store = new IElectronics*[capacity];

	for(unsigned i = 0; i < capacity; ++i)
	{
		*(_store + i) = nullptr;
	}
}

Store::~Store()
{
	delete [] _store;
}

bool Store::empty()const
{
	for(unsigned i = 0; i < _capacity; ++i)
	{
		if(*(_store + i))
		{
			return false;
		}
	}
	return true;
}

void Store::addItem(IElectronics *item)
{
	for(unsigned i = 0; i < _capacity; ++i)
	{
		if(!(*(_store + i)))
		{
			*(_store + i) = item;
			return;
		}
	}
}

IElectronics *Store::getItem(unsigned pos)
{
	IElectronics *item = *(_store + pos);
	*(_store + pos) = nullptr;
	return item;
}
