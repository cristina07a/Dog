#include "Caine.h"
#include <string>

Caine::Caine() : name("no_name"),height(0), weight(0), age(0), color("invisible")
{}

Caine::Caine(string name, float height, int weight, int age, string color)
{
	this->name = name;
	this->height = height;
	this->weight = weight;
	this->age = age;
	this->color = color;
}

string Caine::GetName()
{
	return this->name;
}

float Caine::GetHeight()
{
	return this->height;
}

int Caine::GetWeight()
{
	return this->weight;
}

int Caine::GetAge()
{
	return this->age;
}

string Caine::GetColor()
{
	return this->color;
}

void Caine::SetName(string name)
{
	this -> name = name;
}

void Caine::SetHeight(float height)
{
	this->height = height;
}

void Caine::SetWeight(int weight)
{
	this->weight = weight;
}

void Caine::SetAge(int age)
{
	this->age = age;
}

void Caine::SetColor(string color)
{
	this-> color = color;
}

void Caine::AddEverythingDog()
{
	cout << "Add new dog\n";
	cout << "Name: ";
	string name;
	getline(cin, name);
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
	cin >> weight;
	while (weight < 0)
	{
		cout << "Age should be a positive number!" << endl;
		cout << "Age: ";
		cin >> weight;
	}
	SetAge(weight);
	cout << "Color: ";
	cin >> name;
	SetColor(name);
}

/*void Caine::AddEverythingDog(Caine a)
{
	cout << "Add new dog\n";
	cout << "Name: ";
	string name;
	getline(cin, name);
	cout << "Height: ";
	float height;
	cin >> height;
	cout << "Weight: ";
	int weight;
	cin >> weight;
	cout << "Age: ";
	int age
	cin >> age;
	cout << "Color: ";
	string color;
	getline(cin, color);
	Caine(name, height, weight, age, color);
	cout << "Dog added succesully!\n";
}*/

void Caine::GetEverythingDog()
{
	cout << "Dog" << endl;
	cout << "Name: " << GetName() << endl;
	cout << "Height: " << GetHeight() << " cm" << endl;
	cout << "Weight: " << GetWeight() << " kg" << endl;
	cout << "Age: " << GetAge() << " years" << endl;
	cout << "Color: " << GetColor() << endl;
}