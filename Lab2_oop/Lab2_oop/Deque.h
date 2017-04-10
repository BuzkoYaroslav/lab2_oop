#pragma once
#include "Container.h"

class Deque: Container {
public:
	virtual bool pushFront(int value);
	virtual bool pushBack(int value);
	virtual int popFront();
	virtual int popBack();
	virtual int peekFront() const;
	virtual int peekBack() const;
	
	virtual ~Deque();
};