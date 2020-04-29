#pragma once
#include "Trophy.h"

enum Sex
{
	Male,
	Female
};

class LionTrophy : public Trophy
{
private:
	Sex sex;

public:
	Sex getSex() const;
};

