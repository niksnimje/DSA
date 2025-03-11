#include<iostream>
using namespace std;

class Sport{
	public:
	int age;
	string name,gameName,role;
};

int main()
{
	int a=10;
	Sport e1,e2,e3;
	
	e1.age=18;
	e1.name="Arjun";
	e1.gameName="Cricket";
	e1.role="Bolwer";
	
	e2.age=19;
	e2.name="Om";
	e2.gameName="Cricket";
	e2.role="keeper";
	
	e3.age=20000;
	e3.name="Nikhil";
	e3.gameName="Cricket";
	e3.role="keeper";
	
	
	
	cout << "Name: "<<e1.name << endl;
	cout << "role: "<<e1.role << endl <<endl;
	
	cout << "Name: "<<e2.name << endl;
	cout << "role: "<<e2.role << endl <<endl;
	
	cout << "Name: "<<e3.name << endl;
	cout << "role: "<<e3.role << endl ;
	
	return 0;
}
	
