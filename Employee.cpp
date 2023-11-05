
#include"Employee.h"


	Employee::Employee()  //default
	{
		this->id=0;
		strcpy(this->name,"Not given");
		this->salary=0;
	}
	
	Employee::Employee (int id,char* name,double salary)//parametrlised  
	{
		this->id=id;
		strcpy(this->name,name);
		this->salary=salary;
	}
	void Employee::setId(int i)
	{
		this->id=i;
	}
	void Employee::setName(char* n)
	{
		strcpy(this->name,n);
	}
	void Employee::setSalary(double salary)
	{
		this->salary=salary;
	}
	int Employee::getId()
	{
		return this->id;
	}
	char* Employee::getName()
	{
		return this->name;
	}
	double Employee::getSalary()
	{
		return this->salary;
	}
	void Employee::display()
	{
		cout<<"\n_____________________________________________________\n";
		cout<<"EMployee id:"<<this->id<<"\n";
		cout<<"Employee name:"<<this->name<<"\n";
		cout<<"Employee salary:"<<this->salary<<"\n";
	}

	
