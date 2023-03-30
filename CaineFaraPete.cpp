#include "CaineFaraPete.h"

CaineFaraPete::CaineFaraPete()
{
	Caine();
	this->NumberOfDots = 0;
}

CaineFaraPete::CaineFaraPete(string name, float height, int weight, int age, string color)
{
	Caine(name, height, weight, age, color);
	this->NumberOfDots = 0;
}

int CaineFaraPete::GetNumberOfDots()
{
	cout << this->NumberOfDots;
	return this->NumberOfDots;
}

void CaineFaraPete::GetEverythingDog()
{
	cout << "Dog without dots" << endl;
	cout << "Name: " << GetName() << endl;
	cout << "Height: " << GetHeight() << " cm" << endl;
	cout << "Weight: " << GetWeight() << " kg" << endl;
	cout << "Age: " << GetAge() << " years" << endl;
	cout << "Color: " << GetColor() << endl;
	cout << "Number of dots: ";
	GetNumberOfDots();
	cout << endl;
}

void CaineFaraPete::AddEverythingDog()
{
	cout << "Add new dog without dots\n";
	cout << "Name: ";
	string name;
	cin >> name;
	SetName(name);
	cout << "Height: ";
	float height;
	cin >> height;
	while (height <= 0)
	{
		cout << "Height is greater than 0!" << endl;
		cout << "Height: ";
		cin >> height;
	}
	SetHeight(height);
	cout << "Weight: ";
	int weight;
	cin >> weight;
	while (weight <= 0)
	{
		cout << "Weight is greater than 0!" << endl;
		cout << "Weight: ";
		cin >> weight;
	}
	SetWeight(weight);
	cout << "Age: ";
	int age;
	cin >> age;
	while (age < 0)
	{
		cout << "Age should be a positive number!" << endl;
		cout << "Age: ";
		cin >> age;
	}
	SetAge(age);
	cout << "Color: ";
	string color;
	cin >> color;
	SetColor(color);
	cout << "Number of dots: 0";
	cout << endl;
}
