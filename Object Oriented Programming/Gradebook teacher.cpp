#include <iostream>
#include <string>
using namespace std;

class GradeBook {
	string courseName;
public:
	// constructor initializes courseName with string supplied as argument
	GradeBook(string name) {
		setCourseName(name); // call set function to initialize courseName
	}

	void displayMessage() {
		cout << "Welcome to the grade book for " << courseName << endl;
	}
	void setCourseName(string name) {
		courseName = name;
	}
	string getCourseName() {
		return courseName;
	}

};


int main() {

}
