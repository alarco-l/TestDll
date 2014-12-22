#pragma once

#define				EXPORT extern "C" 
#define				DLL __declspec(dllexport)  

class				IDLL
{
public:
	virtual			~IDLL() {};

	virtual void	crier() = 0;
};

EXPORT DLL IDLL			*newInstance();