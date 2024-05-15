//#include "PointersClass.h"
#include "PointersClass.h"
void Pointers::setpInt(int* pInt_)
{
    pInt = pInt_;
}
void Pointers::setpDouble(double* pDouble)
{
    pDouble = pDouble_;
}

void Pointers::setpInt(int number)
{
    if (pInt != nullptr)
        *pInt = number;
}

void Pointers::setpDouble(double number)
{
    if (pDouble != nullptr)
        *pDouble = number;
}
int* Pointers::getpInt() const
{
    return pInt;
}
int* Pointers::getpDouble() const
{
    return pDouble;
}
int* Pointers::getpIntValue() const
{
    if (getpInt() != nullptr)
        return *(getpInt());
    return 0;
}
int* Pointers::getpDoubleValue() const
{
    if (getpDouble() != nullptr)
        return *(getpDouble());
    return 0;
}
Pointers::Pointers()
{
    setpDouble(nullptr);
    setpInt(nullptr)l
}

void printDouble()
{

}