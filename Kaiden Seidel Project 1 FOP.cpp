#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
	float assignment1, assignment2, assignment3, assignment4, assignment5, assignment6, assignment7, assignment8, assignment9, assignment10, project1, project2;
	// This code shows the "assigments" as variables used to create the solution. 
	cout << "Please enter the score for 'Assignment #1' : "; 
	// This code is used to display directions 
	cin >> assignment1;
	// This code accepts the previous input, allowing the variable "assignment1" to be used. 
	while (assignment1 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Assignment #1': "; 
	// This code ensures negative numbers cannot be input
		cin >> assignment1; 
	// This code accepts the previous input, allowing the variable "assignment1" to be used. 
	}
	cout << "Please enter the score for 'Assignment #2' : ";
	// This code is used to display directions 
	cin >> assignment2;
	// This code accepts the previous input, allowing the variable "assignment2" to be used. 
	while (assignment2 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Assignment #2': ";
		// This code ensures negative numbers cannot be input
		cin >> assignment2;
	// This code accepts the previous input, allowing the variable "assignment2" to be used.
	}
	cout << "Please enter the score for 'Assignment #3' : ";
	// This code is used to display directions 
	cin >> assignment3;
	// This code accepts the previous input, allowing the variable "assignment3" to be used. 
	while (assignment3 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Assignment #3': ";
		// This code ensures negative numbers cannot be input
		cin >> assignment3;
	// This code accepts the previous input, allowing the variable "assignment3" to be used. 
	}
	cout << "Please enter the score for 'Assignment #4' : ";
	// This code is used to display directions 
	cin >> assignment4;
	// This code accepts the previous input, allowing the variable "assignment4" to be used. 
	while (assignment4 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Assignment #4': ";
		// This code ensures negative numbers cannot be input
		cin >> assignment4;
		// This code accepts the previous input, allowing the variable "assignment4" to be used. 
	}
	cout << "Please enter the score for 'Assignment #5' : ";
	// This code is used to display directions 
	cin >> assignment5;
	// This code accepts the previous input, allowing the variable "assignment5" to be used. 
	while (assignment5 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Assignment #5': ";
		// This code ensures negative numbers cannot be input
		cin >> assignment5;
	// This code accepts the previous input, allowing the variable "assignment5" to be used.
	}
	cout << "Please enter the score for 'Assignment #6' : ";
	// This code is used to display directions 
	cin >> assignment6;
	// This code accepts the previous input, allowing the variable "assignment6" to be used. 
	while (assignment6 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Assignment #6': ";
		// This code ensures negative numbers cannot be input
		cin >> assignment6;
	// This code accepts the previous input, allowing the variable "assignment6" to be used. 
	}
	cout << "Please enter the score for 'Assignment #7' : ";
	// This code is used to display directions 
	cin >> assignment7;
	// This code accepts the previous input, allowing the variable "assignment7" to be used. 
	while (assignment7 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Assignment #7': ";
		// This code ensures negative numbers cannot be input
		cin >> assignment7;
	// This code accepts the previous input, allowing the variable "assignment7" to be used.
	}
	cout << "Please enter the score for 'Assignment #8' : ";
	// This code is used to display directions 
	cin >> assignment8;
	// This code accepts the previous input, allowing the variable "assignment8" to be used. 
	while (assignment8 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Assignment #8': ";
		// This code ensures negative numbers cannot be input
		cin >> assignment8;
	// This code accepts the previous input, allowing the variable "assignment8" to be used.
	}
	cout << "Please enter the score for 'Assignment #9' : ";
	// This code is used to display directions 
	cin >> assignment9;
	// This code accepts the previous input, allowing the variable "assignment9" to be used. 
	while (assignment9 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Assignment #9': ";
		// This code ensures negative numbers cannot be input
		cin >> assignment9;
	// This code accepts the previous input, allowing the variable "assignment9" to be used. 
	}
	cout << "Please enter the score for 'Assignment #10' : ";
	// This code is used to display directions 
	cin >> assignment10;
	// This code accepts the previous input, allowing the variable "assignment10" to be used. 
	while (assignment10 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Assignment #10': ";
		// This code ensures negative numbers cannot be input
		cin >> assignment10;
	// This code accepts the previous input, allowing the variable "assignment10" to be used. 
	}
	cout << "Please enter the score for 'Project #1' : ";
	// This code is used to display directions 
	cin >> project1;
	// This code accepts the previous input, allowing the variable "project1" to be used. 
	while (project1 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Project #1': ";
		// This code ensures negative numbers cannot be input
		cin >> project1;
		// This code accepts the previous input, allowing the variable "project1" to be used. 
	}
	cout << "Please enter the score for 'Project #2' : ";
	// This code is used to display directions 
	cin >> project2;
	// This code accepts the previous input, allowing the variable "project2" to be used. 
	while (project2 < 0)
	{
		cout << "Grades cannot be negative. Please enter the score for 'Project #2': ";
		// This code ensures negative numbers cannot be input
		cin >> project2;
		// This code accepts the previous input, allowing the variable "project2" to be used. 
	}
	cout << endl; 
	float vtotal = assignment1 + assignment2 + assignment3 + assignment4 + assignment5 + assignment6 + assignment7 + assignment8 + assignment9 + assignment10 + project1 + project2; // The total of all grades
	cout << "TOTAL POINTS SO FAR:  " << setprecision(2) << fixed << showpoint << vtotal / 1000 * 1000 << endl; // This shows the total in the solution
	std::cout << std::setfill(char(205)) << std::setw(14.5) << char(203) << std::setfill(char(205)) << std::setw(16.5) << char(203) << std::setfill(char(205)) << std::setw(20.5) << char(187) << "" << endl; // This is the first line for the data table
	std::cout << "  FINAL GRADE" << char(186) << "  POINTS NEEDED" << char(186) << "  PERCENTAGE NEEDED" << char(186) << endl; // This is the second line of the data table which includes the headers
	std::cout << std::setfill(char(205)) << std::setw(14.5) << char(206) << std::setfill(char(205)) << std::setw(16.5) << char(206) << std::setfill(char(205)) << std::setw(20.5) << char(185) << "" << endl; // This is the third line in the table seperating the headers from the other data
	std::cout << std::setfill(' ') << std::setw(13) << "A" << char(186) << std::setw(15.5) << 900 - vtotal << char(186) << std::setw(18) << (900 - vtotal) / 2 << "%" << char(186) << endl; // This is the fourth line with all information relating to the final grade "A"
	std::cout << std::setfill(' ') << std::setw(13) << "B" << char(186) << std::setw(15.5) << 800 - vtotal << char(186) << std::setw(18.5) << (800 - vtotal) / 2 << "%" << char(186) << endl; // This is the fithth line with all information relating to the final grade "B"
	std::cout << std::setfill(' ') << std::setw(13) << "C" << char(186) << std::setw(15) << 700 - vtotal << char(186) << std::setw(18.5) << (700 - vtotal) / 2 << "%" << char(186) << endl; // This is the sixth line with all information relating to the final grade "C"
	std::cout << std::setfill(' ') << std::setw(13) << "D" << char(186) << std::setw(15) << 600 - vtotal << char(186) << std::setw(18) << (600 - vtotal) / 2 << "%" << char(186) << endl; // This is the seventh line with all information relating to the final grade "D"
	std::cout << std::setfill(char(205)) << std::setw(14.5) << char(202) << std::setfill(char(205)) << std::setw(16.5) << char(202) << std::setfill(char(205)) << std::setw(20.5) << char(188) << "" << endl; // This is the final line of the table, closing it off from the rest of the code
	cout << "Any 'Project #03' score below " << (600 - vtotal) / 2 << "% will result in a failing grade for the semester." << endl; // This shows the required grade the student must achieve to get a passing grade
	
	return 0;
}