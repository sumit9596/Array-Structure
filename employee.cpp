#include<iostream>
using namespace std;

class Employee{
	int id;
	char name[3][20];
	float salary;
	
	public:
//		setEmployeeId()
//		setEmployeeName()
//		setEmployeeSalary()
//		showEmployee()
//		getSalary()
//		getEmpId()
//		getName()

	void setEmployeeId()
	{
		cout<<endl<<"Enter your Id : ";
		cin>>id;
	}
	
	void setEmployeeName()
	{
		cout<<endl<<"Enter Your Name : ";
		for(int i=0;i<3;i++)
			cin>>name[i];
	}
	
	void setEmployeeSalary()
	{
		cout<<"\nEnter your Salary : ";
		cin>>salary;
	}
	
	void showEmployee()
	{
		cout<<endl<<endl<<"Here Employee Detail :-"<<endl<<"\tEmployee Id :     "<<id<<endl<<"\tEmployee Name :   "<<name<<endl<<"\tEmployee Salary : "<<salary<<endl;
	}
	
	void getSalary()
	{
		cout<<endl<<"Salary : "<<salary;
	}
	
	void EmpId()
	{
		cout<<endl<<"Employee Id : "<<id;
	}
	
	void getName()
	{
		for(int i=0;i<3;i++)
		{
			cout<<"\n Name : "<<name[i];
		}
	}


};

int main()
{

	Employee e1;
	e1.setEmployeeName();
	e1.getName();
//	e1.setEmployeeId();
//	e1.setEmployeeSalary();
//	e1.showEmployee();


	return 0;
}
