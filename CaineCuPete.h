#pragma once
#include "Caine.h"
//INTERESANTE - FUNCTII VIRTUAL

class CaineCuPete: public Caine
{public:
	CaineCuPete();
	CaineCuPete(string name, float height, int weight, int age, string color, int NumberOfDots);
	void GetEverythingDog();
	void AddEverythingDog();
	int GetNumberOfDots();
	void SetNumberOfDots(int NumberOfDots);
private:
	int NumberOfDots;
};

