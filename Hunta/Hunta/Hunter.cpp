#include <vector>
#include "Hunter.h"
#include "Trophy.h"
#include "ElephantTrophy.h"
#include "RinocerosTrophy.h"
#include "LionTrophy.h"

int Hunter::maleLionCount()
{
	int result = 0;
	for (Trophy* item : (this->trophies))
	{
		if (item->getSpecies() == Lion && ((LionTrophy*)item)->getSex() == Male)
		{
			++result;
		}
	}
	return result;
}