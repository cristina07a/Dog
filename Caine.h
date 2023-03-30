#pragma once
#include <iostream>
using namespace std;

class Caine
{public:
	Caine();
	Caine(string name, float height, int weight, int age, string color);
	string GetName();
	float GetHeight();
	int GetWeight();
	int GetAge();
	string GetColor();
	void SetName(string name);
	void SetHeight(float height);
	void SetWeight(int weight);
	void SetAge(int age);
	void SetColor(string color);
	virtual void GetEverythingDog();
	virtual void AddEverythingDog();
private:
	string name;
	float height;
	int weight;
	int age;
	string color;
};

