#include <iostream>

using namespace std;

template<typename T>
class MyClass {
	T i;
public:
	T getI();
	void setI(T i);
};


template<typename T>
T MyClass<T>::getI() {
	return i;
}

template<typename T>
void MyClass<T>::setI(T i) {
	this->i = i;
}


int main() {
	MyClass<int>* myclassInt = new MyClass<int>();
	myclass->setI(100);
	cout << myclass->getI() << endl;

	MyClass<double>* myClassDouble = new MyClass<double>;
	myClassDouble->setI(100.100);
	cout << myClassDouble->getI() << endl;
	delete myClassDouble;
	delete myclass;
	return 0;
}