#include <iostream>
using namespace std;

class School{
	
	string name,adress,medium;

	public:
  
	void set(string name, string adress , string medium)
	{
		this->name=name;
		this->adress=adress;
		this->medium=medium;
	}
	
    void get() {
        cout << "School Name: " << this->name << endl;
        cout << "Adress : " << this->adress << endl;
    	cout << "Medium: " << this->medium << endl <<endl;
    	
    }
};


class Trustee {
	string name,authority;
	
	public:
	void set(string name, string authority )
	{
		this->name=name;
		this->authority=authority;	
	}
	void get()
	{
		cout << "Trustee Name: " << this->name << endl;
        cout << "Authority(Power) : " << this->authority << endl<<endl;		
	}	
};


class Principal{
	string name,authority,medium;
	
	public:
	void set(string name, string authority, string medium )
	{
		this->name=name;
		this->authority=authority;	
		this->medium=medium;
	}
	void get()
	{
		cout << "Principal Name: " << this->name << endl;
        cout << "Authority(Power) : " << this->authority << endl;
		cout << "Medium : " << this->medium << endl<<endl;		
	}	
};

class Monitor {
	string name,authority;
	
	public:
	void set(string name, string authority )
	{
		this->name=name;
		this->authority=authority;	
	}
	void get()
	{
		cout << "Monitor Name: " << this->name << endl;
        cout << "Authority(Power) : " << this->authority << endl<<endl;		
	}	
};

class Student{
	int age;
	string name,medium;
	
	public:
	void set(string name,int age, string medium )
	{
		this->name=name;
		this->age=age;
		this->medium=medium;
	}
	void get()
	{
		cout << "Student Name: " << this->name << endl;
        cout << "Age : " << this->age << endl;
		cout << "Medium : " << this->medium << endl<<endl;		
	}	
};

int main() {
   
    School s1;
    s1.set("MatruBhumi","Dindoli-394210","Gujarati , Marathi , English");
	s1.get();
	
	Trustee t1;
	t1.set("Ajay Desai","Princpal To Student's");
	t1.get();
	
	Principal p1;
	p1.set("Vishnu Bhai","Teacher To Student's","Gujarati");
	p1.get();
	
	Monitor m1;
	m1.set("Aarohi","Student's");
	m1.get();
	
	Student st1;
	st1.set("Nikhil",15,"Gujarati");
	st1.get();
	
	return 0;
}