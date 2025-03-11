#include<iostream>
using namespace std;

class Employee{
	public:
	int salary;
	string name;
};

int main()
{
	int a=10;
	Employee e1,e2,e3;
	
	e1.salary=18000;
	e1.name="Arjun";
	
	e2.salary=15000;
	e2.name="Om";
	
	e3.salary=20000;
	e3.name="Nikhil";
	
	
	
	cout << "Name: "<<e1.name << endl;
	cout << "Salary: "<<e1.salary << endl <<endl;
	
	cout << "Name: "<<e2.name << endl;
	cout << "Salary: "<<e2.salary << endl <<endl;
	
	cout << "Name: "<<e3.name << endl;
	cout << "Salary: "<<e3.salary << endl ;
	
	return 0;
}
