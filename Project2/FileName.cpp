#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string name;
	int age;
public:
	Animal(string n, int a)
	{
		name = n;
		age = a;
	}
	virtual void Move() = 0;
	virtual void Eat() = 0;
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

class Herbivores: public Animal
{
protected:
	string name_eda;
	int eda_kg;
public:
	Herbivores(string na, int e,string n, int a) :Animal(n, a)
	{
		name_eda = na;
		eda_kg = e;
	}
	void Print()
	{
		Animal::Print();
		cout << "Name eda: " << name_eda << endl;
		cout << "Eda kg: " << eda_kg << endl;
	}
};


class Carnivores : public Animal
{
protected:
	string sacrifice;
	int count_sacrifice;
public:
	Carnivores(string s, int c, string n, int a) : Animal(n, a)
	{
		sacrifice = s;
		count_sacrifice = c;
	}
	void Print()
	{
		Animal::Print();
		cout << "Sacrifice: " << sacrifice << endl;
		cout << "Count sacrifice: " << count_sacrifice << endl;
	}
};

class Elefant :public Herbivores
{
	int lenght_xobot;
public:
	Elefant(int l, string na, int e, string n, int a) :Herbivores(na, e, n, a)
	{
		lenght_xobot = l;
	}
	void Eat()
	{
		cout << "Em travu";
	}
	void Move()
	{
		cout << "Niigga";
	}
	void Print()
	{
		Herbivores::Print();
		cout << "lenght xobot: " << lenght_xobot << endl;
	}
};

class Rabbit: public Herbivores
{
	int speed;
public: 
	Rabbit(int s, string na, int e, string n, int a) :Herbivores(na, e, n, a)
	{
		speed = s;
	}
	void Eat()
	{
		cout << "Eat: Em listvu" << endl;
	}
	void Move()
	{
		cout << "Move: Jump" << endl;
	}
	void Print()
	{
		Herbivores::Print();
		cout << "Speed: " << speed << endl;
	}
};

class Jiraf :public Herbivores
{
	int lenght_shea;
public:
	Jiraf(int len, string na, int e, string n, int a) :Herbivores(na, e, n, a)
	{
		lenght_shea = len;
	}
	void Eat()
	{
		cout << "Eat: Em listvu" << endl;
	}
	void Move()
	{
		cout << "Move: xodit" << endl;
	}
	void Print()
	{
		Herbivores::Print();
		cout << "Lenght shea: " << lenght_shea << endl;
	}
};

int main()
{
	Herbivores* herbivores = nullptr;
	Carnivores* carnivores = nullptr;
	int choice = 0;
	cout << "1. Elefant" << endl;
	cout << "2. Rabbit" << endl;
	cout << "3. Jiraf" << endl;
	cout << "Make your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		herbivores = new Elefant(10, "ererer", 10, "Elefant", 16);
		herbivores->Print();
		herbivores->Eat();
		herbivores->Move();
		break;
	case 2:
		herbivores = new Rabbit(120, "travca", 12, "Rabbit", 8);
		herbivores->Print();
		herbivores->Eat();
		herbivores->Move();
		break;
	case 3:
		herbivores = new Jiraf(12, "travca", 12, "Rabbit", 8);
		herbivores->Print();
		herbivores->Eat();
		herbivores->Move();
		break;
	}
}