#pragma once

#define				EXPORT extern "C" 

class				IDLL
{
public:
	virtual			~IDLL() {};

	virtual void	crier() = 0;
};

EXPORT IDLL			*newInstance();
