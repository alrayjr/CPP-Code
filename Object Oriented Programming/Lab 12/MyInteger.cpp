    #include "MyInteger.h"
    #include <iostream>
    using namespace std;



MyInteger::MyInteger()
    {
        value = 0;
    }
MyInteger::MyInteger(int value)
    {
        this->value = value;
    }

int MyInteger::getValue() const
    {
        return value;
    }

bool MyInteger::isEven() const
    {
        if(value % 2 == 0)
            return true;
        else
            return false;
    }

bool MyInteger::isOdd() const
    {
        if(value % 2 != 0)
            return true;
        else
            return false;
    }

bool MyInteger::isEven(int x)
    {
        if(x % 2 == 0)
            return true;
        else
            return false;
    }

bool MyInteger::isOdd(int x)
    {
        if(x % 2 != 0)
            return true;
        else
            return false;
    }

bool MyInteger::equals(int x) const
    {
    if(x == value)
        return true;
    else
        return false;
    }
bool MyInteger::equals(const MyInteger&) const
    {
    if (getValue() == value)
        return true;
    else
        return false;
    }
