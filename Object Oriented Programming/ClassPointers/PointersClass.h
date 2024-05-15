//#ifndef POINTERSCLASS_H_INCLUDED
//#define POINTERSCLASS_H_INCLUDED
#pragma once
class Pointers
{
    int* pInt;
    double* pDouble;

public:

        void setpInt(int* pInt_);
        void setpDouble(double* pDouble_);

        void setpInt(int number);
        void setpDouble(double number);

        //get function
        int* getInt() const;
        double* getpDouble() const;

        int* getIntValue() const;
        double* getpDoubleValue() const;

        //default constructor
        Pointers();
};
