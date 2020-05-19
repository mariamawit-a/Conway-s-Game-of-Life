#ifndef GLIDER_H_
#define GLIDER_H_

#include "life.h"

class Glider : public Life {
public:
	// Constructor/destructor
	Glider(int r, int c);
	~Glider();
};

#endif