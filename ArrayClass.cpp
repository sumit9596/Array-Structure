#include<iostream>
#include<conio.h>  // Used for getch() function (Windows-specific)
#include<stdio.h>
#include<string>
using namespace std;

class Array {
	
	int A[10];  // Array to store 10 integers
	
	public:
		
		// Function to display the menu and allow user interaction
		void showMenu() {
			int n;	
			
			while(1) {
				system("cls");  // Clear the screen (works on Windows)
				
				// Display menu options
				cout << endl << endl << "Here is your menu bar : \n";
				cout << endl << "\t1. Show Element " << endl
				     << "\t2. Input Array Element " << endl
				     << "\t3. Show Maximum Element " << endl
				     << "\t4. Show Minimum Element " << endl
				     << "\t5. Sort " << endl
				     << "\t6. Edit Element " << endl
				     << "\t7. Sum of Element " << endl
				     << "\t8. Average of Element " << endl
				     << "\t9. Exit " << endl;	
				cout << endl << "\nEnter Menu Button : ";	
				
				cin >> n;  // Take menu input from the user
				cout << endl;
				
				// Handle menu option based on input
				switch(n) {
					case 1: {
						printElement();  // Display array elements
						break;
					}	
					
					case 2: {
						inputArrayElement();  // Input new elements into the array
						break;
					}
					
					case 3: {
						findMaxElement();  // Find and display the maximum element
						break;	
					}
					
					case 4: {
						findMinElement();  // Find and display the minimum element
						break;	
					}
					
					case 5: {
						sort();  // Sort the array in ascending order
						break;	
					}	
				
					case 6: {
						editElement();  // Edit a specific element in the array
						break;	
					}
					
					case 7: {
						sumOfElement();  // Calculate and display the sum of elements
						break;	
					}
						
					case 8: {
						averageOfElements();  // Calculate and display the average of elements
						break;	
					}	
				
					case 9: {
						cout << "Thanks !";  // Exit message
						return;  // Exit the loop and end the program
						break;	
					}	
					default :
						cout << "Input is wrong";  // Handle invalid input
				}
				
				cout << endl << "\n\n\t\tPress any Key !\n\n";
				getch();  // Wait for user input (Windows-specific)
			}
		}
		
		// Function to input 10 elements into the array
		void inputArrayElement() {
			cout << endl << "Enter your 10 elements: ";
			for(int i = 0; i < 10; i++)
				cin >> A[i];  // Store elements in the array
			
			printElement();  // Display the array after input
		}
		
		// Function to find and display the maximum element in the array
		void findMaxElement() {
			int max = A[0];  // Assume first element is the maximum
			
			for(int i = 1; i < 10; i++)
				if(max < A[i])  // Compare each element
					max = A[i];  // Update max if a larger element is found
			
			cout << endl << "Maximum Element is: " << max;		
		}
		
		// Function to find and display the minimum element in the array
		void findMinElement() {
			int min = A[0];  // Assume first element is the minimum
			
			for(int i = 1; i < 10; i++)
				if(min > A[i])  // Compare each element
					min = A[i];  // Update min if a smaller element is found
			
			cout << endl << "Minimum Element is: " << min;		
		}
		
		// Function to sort the array in ascending order using bubble sort
		void sort() {
			int temp;  // Temporary variable for swapping
			int i, j;
			
			for(i = 0; i < 10; i++) {
				for(j = i + 1; j < 10; j++) {
					if(A[i] > A[j]) {  // If elements are out of order
						temp = A[i];  // Swap the elements
						A[i] = A[j];
						A[j] = temp;
					}
				}
			}
			
			printElement();  // Display the sorted array
		}
		
		// Function to edit a specific element in the array
		void editElement() {
			int index, newData;
			
			printElement();  // Display current elements
			
			cout << endl << "Enter Index: ";
			cin >> index;  // Get index from user
			cout << endl << "Enter new data: ";
			cin >> newData;  // Get new value
			
			// Validate the index
			if(index >= 0 && index < 10) {
				A[index] = newData;  // Update the array
			} else {
				cout << endl << "Your Index is wrong!";  // Handle invalid index
			}
			
			printElement();  // Display updated array
		}
		
		// Function to calculate and display the sum of elements in the array
		void sumOfElement() {
			int sum = 0;
			for(int i = 0; i < 10; i++)
				sum += A[i];  // Add each element to the sum
			
			cout << endl << "Sum of Elements: " << sum;	
		}
		
		// Function to calculate and display the average of elements in the array
		void averageOfElements() {
			int sum = 0;
			float avg = 0.0;
			
			for(int i = 0; i < 10; i++) {
				sum += A[i];  // Add each element to the sum
			}
			avg = sum / 10.0;  // Calculate average (floating-point division)
			
			cout << endl << "Average: " << avg;  // Display the average
		}
		
		// Function to display all elements in the array
		void printElement() {
			cout << "Here are your elements: " << endl << endl;
			for(int i = 0; i < 10; i++)
				cout << A[i] << "\t";  // Print each element
		}
};

int main() {
	Array a1;  // Create an object of the Array class
	a1.showMenu();  // Start the menu interaction
	
	return 0;
}
