#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declaring variables
	string studentName;
	string frontName;
	string endName;

	int number;
	int count = 0;

	//title for output screen
	cout << "***Students in the Class***";
	//number of students in the class
	cout << "Enter the Number of Students in the Class: ";
	cin >> number;
	while (number < 1 || number>25)
	{
		cout << "Please Enter a Valid Number of Students 1-25: ";
		cin >> number;
	}
	//names of students in the class
	cout << "Enter the Names of the Students in the Class: " << endl;
	cin >> studentName;
	frontName = studentName;
	endName = studentName;
	count++;
	while (count < number)
	{
		cin >> studentName;
		if (studentName < frontName)
			frontName = studentName;
		if (studentName > endName)
			endName = studentName;
		count++;
	}
	cout << "Front Line Student: " << frontName << endl << endl;
	cout << "End Line Student: " << endName << endl << endl;
	return 0;
}