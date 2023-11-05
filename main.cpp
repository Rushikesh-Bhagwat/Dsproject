#include"LinkedList.h"
int main()
{
	LinkedList l;
	int choice;
	while(choice!=6)
	{
		cout<<"\n\t1.Insert from Position";
		cout<<"\n\t2.Delete from the Position";
		cout<<"\n\t3.Display";
		cout<<"\n\t4.Edit Employee";
		cout<<"\n\t5.Search Employee by Id";
		cout<<"\n\t6.Exit";
		cout<<"\nEnter the choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					int eid;
					char name[20];
					double salary;
					
					cout<<"\nEnter the  eid:";
					cin>>eid;
					cout<<"\nEnter the Name:";
					cin>>name;
					cout<<"\nEnter the salary:";
					cin>>salary;
					
					Employee e(eid,name,salary);
					int pos;
					cout<<"\nEnter the  position:";
					cin>>pos;
					l.insertPos(e,pos);
				}
				break;
	
			case 2:
				{
					int pos;
					cout<<"\nEnter the postion we want to delete the node:";
					cin>>pos;
					l.deletePos(pos);
				}	
				break;
			case 3:
				{
					l.display();
				}
				break;
			case 4:
				{
					int id;
					cout<<"\n Enter the id:";
					cin>>id;
					l.editEmployeeById(id);
				}
				break;
				
			case 5:
				{
					int id;
					cout<<"Enter the id We want to search:";
					cin>>id;
					l.searchEmployeeById(id);
				}
				break;	
			case 6:
				cout<<"\n--------End of program";
				default:
					cout<<"\nInvalid choice";
		}
	}
	
 
	return 0;
}
