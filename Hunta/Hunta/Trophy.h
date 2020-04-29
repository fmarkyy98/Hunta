#pragma once
#include <string>

enum Species
{
	Elephant,
	Rinoceros,
	Lion
};

struct Date
{
	int year;
	int month;
	int day;
};

class Trophy
{
protected:
	Species species;
	std::string place;
	Date date;
	int weigth;

public:
	Species getSpecies() const;
};

