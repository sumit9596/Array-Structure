
#include <bits/stdc++.h>
using namespace std;

void Check_Adult()
{
	int n;
	cout << endl
		 << "Enter a age : ";
	cin >> n;

	if (n >= 18)
		cout << "You are Adult!";
	else if (n >= 1)
		cout << "You are not Adult!";
	else
		cout << "Wrong Input !";
}

void Check_Roll_Even_Or_Odd()
{
	int n;
	cout << endl
		 << "Enter your roll no. : ";
	cin >> n;

	if (n % 2)
		cout << "Your roll no. is Odd ! ";
	else
		cout << "Your roll no. is Even ! ";
}

void Check_Divisibily_By_Five()
{
	int n;
	cout << endl
		 << "Enter your roll no . : ";
	cin >> n;

	int rem = n % 5;

	if (rem == 0)
		cout << " Your roll number is already divisible by 5  ";
	else if (rem > 2)
		cout << "Increase " << 5 - rem << " then your roll no. is divisible by 5 ";
	else if (rem <= 2)
		cout << "Decrease " << rem << " then your roll no. is divisible by 5 ";
}

void Area_Of_Circle()
{
	int n;
	cout << endl
		 << "Enter your roll no. : ";
	cin >> n;

	if (n < 20)
		n = 60 + n;

	float BigCircleArea = 3.14 * n * n;

	float SmallCircleArea = 3.14 * 3 * 3;

	float result = BigCircleArea - SmallCircleArea;

	cout << result << " Unit";
}

void Convert_Number_To_Digit()
{
	int n;
	cout << "Enter a three digit roll no : ";
	cin >> n;

	int d1 = n / 100;
	int d2 = (n / 10) % 10;
	int d3 = n % 10;

	cout << endl
		 << "No. of Bags : " << d1;
	cout << endl
		 << "No. of Books : " << d2;
	cout << endl
		 << "No. of Pens : " << d3;

	if (d1 >= d2 && d1 >= d3)
		cout << endl
			 << "Bags are most ";
	if (d2 >= d1 && d2 >= d3)
		cout << endl
			 << "Books are most ";
	if (d3 >= d1 && d3 >= d2)
		cout << endl
			 << "Pens are most ";
}

void Print_Pattern_1()
{
	int n;
	cout << endl
		 << "Enter Pattern Value : ";
	cin >> n;
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (1)
				cout << "* ";
			else
				cout << " ";
		}
		cout << "\n";
	}
}

void Print_Pattern_SinCurve()
{
	int n;
	cout << endl
		 << "Enter Pattern Value : ";
	cin >> n;
	int i = 1, j, count = 1;

	// t1 , t2 , t3 for which index j value print * else print space

	int t1 = 2, t2 = 1, t3 = 4;

	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= n + 1; j++)
		{
			if (i == 1)
			{
				if (j == t1)
				{
					cout << "* ";
					t1 += 4;
				}
				else
					cout << "  ";
			}
			if (i == 2)
			{
				if (j == t2)
				{
					cout << "* ";
					t2 += 2;
				}
				else
					cout << "  ";
			}
			if (i == 3)
			{
				if (j == t3)
				{
					cout << "* ";
					t3 += 4;
				}
				else
					cout << "  ";
			}
		}
		cout << endl;
	}
}

void Sequential_Multiplication()
{
	int n;
	cout << endl
		 << "Enter your roll no. :";
	cin >> n;

	if (n < 20)
		n += 60;

	int cross = 0;
	int result = 1;

	for (int i = 1; i < n; i++)
	{
		result *= i;
		cross++;

		if (n <= result)
			break;
	}

	cout << cross << " is the number of steps you need to cross the value of your roll no if you are multiplying integers sequentially starting from 1";
}

void Arranging_Desk()
{
	int n;

	cout << "Enter no. of students : ";
	cin >> n;

	cout << n / 3 << " is the average number of desk that is needed to conduct your class daily.";
}

void Grade_System()
{
	int n;
	int total_Marks = 40;
	cout << "Enter your marks: ";
	cin >> n;

	if (n >= 30 && n <= 40)
		cout << "Grade - A";
	else if (n >= 20 && n <= 30)
		cout << "Grade - B";
	else if (n >= 20 && n <= 10)
		cout << "Grade - C";
	else if (n <= 10 && n >= 0)
		cout << "Grade - D";
	else
		cout << "Incorrect marks";
}

int main()
{
	// Uncomment functions to test individually

	// Check_Adult();
	// Check_Roll_Even_Or_Odd();
	// Check_Divisibily_By_Five();
	// Area_Of_Circle();
	// Convert_Number_To_Digit();
	// Print_Pattern_1();
	Print_Pattern_SinCurve();
	// Sequential_Multiplication();
	// Arranging_Desk();
	// Grade_System();

	return 0;
}

/*
			ASSIGNMENT - 1

 1. Write a program that will show whether you are an adult or not.
 2. Write a program to check whether your roll no is even or odd.
 3. Write a program to take a integer input from user and modify(increase or decrease
in range 0-5) it so that it is closer to your roll no and divisible by 5.
 4. Considering you roll no as the radius of the outer circle write a program that will
show how many small circle of radius 3 unit the outer circle wil contain and show the
 total unused area in the outer circle.
 (if your roll no is in between 1-20 take any number from 60-75).
 5. Assume that your roll no is of  three digit (for example roll no 5 can be considered
as 005), the most left digit showing the no of bags you have, middle digit no of
books, most right digit no of pens you have.
 Now take your roll no as input and print
		   I
 have d1 no of bags
		   I
 have d2 no of books
 I have d3 no of pens
 and show which of these three you have the most(anyone).
 6. print the pattern
 ****
 ****
 ****
 ****
 this pattern is for input 4. Now take your own input and print the corresponding
pattern.
 7. print the pattern
 input = 1
   *
 *
 input = 2
   *
 *    *
 input = 3
   *
 *    *
		 *
input = 4
   *
 *    *   *
		 *
 Now take your your own input and make your corresponding pattern.
 8. What is the number of steps you need to cross the value of your roll no if you are
multiplying integers sequentially starting from 1. (if your roll no is in between 1-20
take any number from 60-75).
 9. You have noticed that max three people can sit at a single desk, then what is the
average number of desk that is needed to conduct your class daily.(Assuming that
there are 113 students in your class).
 10. Write a program that will show you your grade (A, B, C, D) according to the
marks obtained from this assignment

*/
