#include <windows.h>
#include <iostream>

#include "IDLL.h"
#include "DlLoader.hpp"

int			main()
{
	IDLL *instance = NULL;
	DlLoader load("../Debug");
	std::vector<std::string> name;
	std::map<std::string, int> test;

	test["a"] = 1;
	test["b"] = 2;
	load.loadDLLDir("../Debug");
	name = load.getAllDLLName();
	for (std::vector<std::string>::const_iterator i = name.begin(); i != name.end(); ++i)
	{
		instance = load.getInstance<IDLL>(*i);
		instance->crier();
	}
	system("pause");
	return (0);
}