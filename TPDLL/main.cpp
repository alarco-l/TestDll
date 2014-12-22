#include <iostream>

#include "IDLL.h"
#include "DlLoader.hpp"

int			main()
{
	IDLL *instance = NULL;
	DlLoader load("../Platipus");
	std::vector<std::string> name;

	load.loadDLLDir("../Platipus");
	instance = load.getInstance<IDLL>("platypus.so");
	instance->crier();
	// load.loadDLLDir("../Debug");
	// name = load.getAllDLLName();
	// for (std::vector<std::string>::const_iterator i = name.begin(); i != name.end(); ++i)
	// {
	//   std::cout << "|" << *i <<  "|"<< std::endl;
	// 	instance = load.getInstance<IDLL>(*i);
	// 	instance->crier();
	// }
    	return (0);
}
