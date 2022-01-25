
#include<iostream>
#include<iomanip>
using namespace std;

class virus
{
public:
	float death, cases, rate;
	

	void get_value()
	{
		cout << "Enter cases of death : ";
		cin >> death;
		cout << endl;
		cout << "Enter total cases of Infection : ";
		cin >> cases; 
		cout << endl;
	}
public:
	virtual float mortality_rate()
	{
		return 0;
	}
	
};

class covid : public virus 
{
public:
	float mortality_rate()
	{
	
		 rate = (death / cases) * 100;
		 return (rate);
	}
};

class hiv : public virus
{
public:
	float mortality_rate()
	{
		rate = (death / cases) * 100 ;
		 return (rate);
	}
};

class birdflu : public virus
{
public:
	float mortality_rate()
	{
	
		rate = (death / cases) * 100;
		return (rate);
	}
};


int main()
{
	int user_input;


	for (int i = 0; i <= 2; i++)
	{

		cout << "Select Infection\n 1 - Covid\n 2 - HIV\n 3 - Birdflu\n";
		cin >> user_input;




		switch (user_input)
		{
		case 1:
		{
			covid a;
			a.get_value();
			cout << "covid Mortality rate = " << a.mortality_rate() << "%" << endl;
			break;
		}
		case 2:
		{
			hiv b;
			b.get_value();
			cout << "HIV Mortality rate =" << b.mortality_rate() << "%" << endl;
			break;
		}
		case 3:
		{
			birdflu c;
			c.get_value();
			cout << "Bird_flu Mortality rate =" << c.mortality_rate() << "%" << endl;
			break;
		}
		}
	}
}
