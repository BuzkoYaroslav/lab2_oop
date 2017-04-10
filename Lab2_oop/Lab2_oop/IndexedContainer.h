#pragma once
#include "Container.h"

class IndexedContainer : Container {
public:
	virtual int get(int index) const;
	virtual void set(int index, int value);

	virtual ~IndexedContainer();
};