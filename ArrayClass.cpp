#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
using namespace std;

class Array{
	
	int A[10];
	
	public:
		
		void showMenu()
		{
			int n;	
			
			while(1)
			{
				system("cls");

			
				cout<<endl<<endl<<"Here is your menu baar : \n";
			
				cout<<endl<<"\t1. Show Element "<<endl<<"\t2. Input Array Element "<<endl<<"\t3. Show Maximum Element "<<endl<<"\t4. Show Minimum Element "<<endl<<"\t5. Sort "<<endl<<"\t6. Edit Element "<<endl<<"\t7. Sum of Element "<<endl<<"\t8. Average of Element "<<endl<<"\t9. Exit "<<endl;	
				cout<<endl<<"\nEnter Menu Button : ";	
				
				
				cin>>n;
				cout<<endl;
				
				switch(n)
				{
					case 1:
					{
						printElement();
						break;
					}	
					
					case 2:
					{
						inputArrayElement();
						break;
					}
					
					case 3:
					{
						findMaxElement();
						break;	
					}
					
					case 4:
					{
						findMinElement();
						break;	
					}
					
					case 5:
					{
						sort();
						break;	
					}	
				
					case 6:
					{
						editElement();
						break;	
					}
					
					case 7:
					{
						sumOfElement();
						break;	
					}
						
					case 8:
					{
						averageOfElements();
						break;	
					}	
				
					case 9:
					{
						cout<<"Thanks !";
						return;
						break;	
					}	
					default :
						cout<<"Input are wrong ";	
									
					
				}
				cout<<endl<<"\n\n\t\tPress any Key !\n\n";
				getch();	
			}
		}
		
		void inputArrayElement()
		{
			cout<<endl<<"Enter your 10 element : ";
			for(int i=0;i<10;i++)
				cin>>A[i];
			
			printElement();
		}
		
		void findMaxElement()
		{
			int max = A[0];
			
			for(int i=1;i<10;i++)
				if(max<A[i])
					max=A[i];
			
			cout<<endl<<"Maximum Elemnts is : "<<max;		
		}
		
		void findMinElement()
		{
			int min = A[0];
			
			for(int i=1;i<10;i++)
				if(min>A[i])
					min=A[i];
			
			cout<<endl<<"Minimum Elemnts is : "<<min;		
		}
		
		void sort()
		{
			int temp;
			int i,j;
			
			for(i=0;i<10;i++)
			{
				for(j=i+1;j<10;j++)
				{
					if(A[i]>A[j])
					{
						temp=A[i];
						A[i]=A[j];
						A[j]=temp;
					}
				}
			}
			
			printElement();
		}
		
		void editElement()
		{
			int index , newData;
			
			printElement();
			
			cout<<endl<<"Enter Index : ";
			cin>>index;
			cout<<endl<<"Enter newData : ";
			cin>>newData;
			
			if(index<10)
			{
				A[index]=newData;
			}
			else
				cout<<endl<<"Your Index are wrong !";
			
			printElement();	
				
		}
		
		void sumOfElement()
		{
			int sum=0;
			for(int i=0;i<10;i++)
				sum += A[i];
			
			cout<<endl<<"Sum of Elements : "<<sum;	
		}
		
		void averageOfElements()
		{
			int sum=0;
			float avg=0.0;
			
			for(int i=0;i<10;i++)
			{
				sum += A[i];
			}
			avg = sum / 10.0;
			
			cout<<endl<<"Average : "<<avg;
			
		}
		
		void printElement()
		{
			
			cout<<"Here is your Elements : "<<endl<<endl;
			for(int i=0;i<10;i++)
				cout<<A[i]<<"\t";
		}
				
};


int main()
{
	Array a1;
	a1.showMenu();

	return 0;
}
