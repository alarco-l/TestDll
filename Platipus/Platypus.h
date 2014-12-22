#pragma once

#include <iostream>

#include "IDLL.h"

class				Platypus : public IDLL
{
public:
	Platypus();
	~Platypus();

	void			crier();
};