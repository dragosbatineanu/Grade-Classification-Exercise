#include <iostream>
#include "Comparison.h"

using namespace std;

//We check if the grade is between 0 and 100, else it is invalid
void gradeCheck(double grade) {

	bool validGrade = 0;

	if (grade < 0 || grade > 100) {
		cout << "The grade entered is invalid." << endl;
		cout << "Enter one between 0 and 100." << endl;
		cin >> grade;
		bool validGrade = 0;

		while (grade < 0 || grade > 100) {
			cout << "The grade entered is invalid." << endl;
			cout << "Enter one between 0 and 100." << endl;
			cin >> grade;

		}

		comparisonGrade(grade);

	}
}

//This function runs if gradeCheck calls it. Based on the score, the grade is given.
void comparisonGrade(double grade) {

	if (grade >= 90 && grade <= 100) {
		cout << "The grade is:" << " " << grade << " " << "Excellent";
	}

	else if (grade >= 80 && grade <= 89) {
		cout << "The grade is:" << " " << grade << " " << "Good";
	}

	else if (grade >= 70 && grade <= 79) {
		cout << "The grade is:" << " " << grade << " " << "Average";
	}

	else if (grade >= 60 && grade <= 69) {
		cout << "The grade is:" << " " << grade << " " << "Poor";
	}

	else {
		cout << "The grade is:" << " " << grade << " " << "Fail";
	}
}