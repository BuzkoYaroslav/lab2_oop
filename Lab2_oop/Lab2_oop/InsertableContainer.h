#pragma once
#include "IndexedContainer.h"

class InsertableContainer : IndexedContainer {
	virtual bool insertAt(int index, int value);
	virtual int removeAt(int index);

	virtual ~InsertableContainer();
};