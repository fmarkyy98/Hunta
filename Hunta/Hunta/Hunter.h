#pragma once
#include <string>
#include <vector>

class Hunter
{
private:
	std::string name;
	int age;
	std::vector<Trophy> trophies;

public:
	int maleLionCount();
};

