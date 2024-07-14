#include <iostream>
#include "Comparison.h"
using namespace std;

int main() {

	//Variable where we store our grade
	double grade;

	//Input & storing our variable
	cout << "Enter the grade: " << endl;
	cin >> grade;

	//Function to check if the grade is valid
	gradeCheck(grade);


}