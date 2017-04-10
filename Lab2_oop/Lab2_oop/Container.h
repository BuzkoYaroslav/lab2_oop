#pragma once

class Container {
public: 
	virtual int size() const;
	virtual bool isEmpty() const;
	virtual char* toString() const;
	virtual ~Container();
};