#pragma once
#include "Caine.h"

class CaineFaraPete : public Caine
{
public:
	CaineFaraPete();
	CaineFaraPete(string name, float height, int weight, int age, string color);
	void GetEverythingDog();
	void AddEverythingDog();
	int GetNumberOfDots();
private:
	int NumberOfDots = 0;
};

