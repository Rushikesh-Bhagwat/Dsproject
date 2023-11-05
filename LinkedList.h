#include<iostream>
using namespace std;
#include"Node.h"
class LinkedList
{
	Node *Start;
	public:
		LinkedList();
		void insertPos(Employee & ,int);
		void deletePos(int);
		void editEmployeeById(int);
		void searchEmployeeById(int);
		void display();
		~LinkedList();
};
