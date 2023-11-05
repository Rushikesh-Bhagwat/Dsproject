#include"LinkedList.h"
//#include"Employee.h"
LinkedList::LinkedList()
{
      this->Start==NULL;
}
///////////////////////////////////
void LinkedList::insertPos(Employee& data,int pos)
{
	Node * temp=new Node(data);
	if(Start==NULL)
	{
		Start=temp;
		return;
	}
	if(pos==1)
	{
		temp->setNext(Start);
		Start=temp;
		return;
	}
	Node * p=Start;
	int i=1;
	while(i!=pos-1 && p->getNext()!=NULL)
	{
		p=p->getNext();
		i++;
	}
	temp->setNext(p->getNext());
	p->setNext(temp);
}
////////////////////////////////////
void LinkedList::deletePos(int pos)
{
	if(Start==NULL)
	{
		cout<<"\nNo nodes to delete";
		return;
	}
	Node* p=Start;
	if(pos==1)
	{
		Start=Start->getNext();
		p->getData();
		cout<<"\nis deleted";
		delete p;
		return;	
	}
	int i=1;
	while(i<pos-1 && p->getNext()!=NULL)
	{
		i++;
		p=p->getNext();
	}
	if(i==pos-1)
	{
		Node* q=p->getNext();
		p->setNext(q->getNext());
		delete q;
	}
}
////////////////////////////////////////////////
LinkedList::~LinkedList()
{
	Node* p;
	while(Start!=NULL)
	{
		p=Start;
		Start=Start->getNext();
		delete[] p;
	}	
}
/////////////////////////////////////////
void LinkedList::editEmployeeById(int id)
{
	if(Start==NULL)
	{
		cout<<"\nNo Nodes to Edit";
		return;
	}
	Node *p=Start;
	while(p!=NULL)
	{
		if(p->getData().getId()==id)
		{
			
			//object found
			char ans;
			cout<<"\n Do you wnat to change name(y/n)?";
			cin>>ans;
			if(ans=='y'||ans=='Y')
			{
				char name[20];
				cout<<"\nENter the new Name:";
				cin>>name;
				p->getData().setName(name);
			}
			cout<<"\n Do you wnat to change Salary(y/n)?";
			cin>>ans;
			if(ans=='y'||ans=='Y')
			{
				double salary;
				cout<<"\nENter the new Salary:";
				cin>>salary;
				p->getData().setSalary(salary);
			}
			break;
		}
		p=p->getNext();
	}	
}
/////////////////////////////////
void LinkedList::searchEmployeeById(int id) 
{
	if(Start==NULL)
	{
		cout<<"\nNo Employee is Search";
		
	}
	else
	{
		Node *p=Start;
		while(p!=NULL)
		{
			if(p->getData().getId()==id)
			{
				cout<<"\nEmployee is Found";
			}
			else
			{
				cout<<"\nEmployee is not found";
			}
			break;
		}
		
		
	}
}
void LinkedList::display()
{
	if(Start==NULL)
	{
		cout<<"\nNo Nodes to display";
	}
	else
	{
		Node *p=Start;
		while(p!=NULL)
		{
			//p->getData() will return empolyee object
			p->getData().display();
			p=p->getNext();
		
		}
	}	
}





