#include "Platypus.h"

Platypus::Platypus() {}

Platypus::~Platypus() {}

void			Platypus::crier()
{
	std::cout << "PlatyPlatyPlatypus" << std::endl;
}

EXPORT IDLL			*newInstance()
{
	return (new Platypus());
}