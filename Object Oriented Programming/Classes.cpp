#include <iostream>
#include <string>
using namespace std;

class GradeBook { 
	string courseName;
	int courseNumber;
public:// classes by default have private access specifiers.
	GradeBook() {
		courseName = "COP";
		courseNumber = "3337";
	}
	void displayMessage() {
		cout << "Welcome to the grade book for " << courseName << endl;
		cout << "The course number is " << courseNumber << endl;
	}
	void setCourseName(string name) {
		courseName = name;
	}
	string getCourseName() {
		return courseName;
	}
	void serCourseNumber(int courseNumber_) {
		courseNumber = courseNumber_;
	}
	int  getCourseNumber() {
		return courseNumber;
	}

};


int main() {
	string nameOfTheCourse;
	//cout << "Please enter the name of the course" << endl;
	//getline(cin, nameOfTheCourse);
	GradeBook myGradeBook;


	myGradeBook.setCourseName("COP 3337");
	myGradeBook.displayMessage();
	myGradeBook.displayMessage();
	return 0;
}

