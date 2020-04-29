#pragma once
#include <string>
#include <vector>
#include "Trophy.h"

class Hunter
{
private:
	std::string name;
	int age;
	std::vector<Trophy*> trophies;

public:
	int maleLionCount();
};

