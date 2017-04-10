#pragma once
#include "Container.h"

class PushPopContainer: Container {
public:
	virtual bool push(int value);
	virtual int pop();
	virtual int peek() const;

	virtual ~PushPopContainer();
};