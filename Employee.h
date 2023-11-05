
#include<stdio.h>
#include<string.h>
using namespace std;
#include<iostream>
class Employee
{
	int id;
	char name[20];
	double salary;
	public:
	Employee();  //default

	Employee (int ,char* ,double );//parametrlised  
	
	void setId(int );

	void setName(char* );

	void setSalary(double );

	int getId();
	
	char* getName();
	
	double getSalary();
	
	void display();
	


};
