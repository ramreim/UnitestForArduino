#include "LedPagalLygi.h"

#include "Result.h"

int LedPagalLygi::KuriPinaIjungti(int analogValue)
{
	int sk = 0;

	if (analogValue < 50)
		sk = 2;

	if (analogValue > 50 && analogValue < 100)
		sk = 3;

	if (analogValue > 100 && analogValue < 150)
		sk = 4;

	if (analogValue > 150)
		sk = 5;

	return sk;
}

