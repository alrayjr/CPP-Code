#ifndef MYINTEGER_H_INCLUDED
#define MYINTEGER_H_INCLUDED

class MyInteger
{
public:
    MyInteger();
    MyInteger(int _value);
    int getValue() const;
    bool isEven () const ;
    bool isOdd() const ;
    bool static isEven(int x);
    bool static isOdd(int x) ;
    bool equals(int) const ;
    bool equals(const MyInteger&) const ;




private:
    int value;

};

#endif // MYINTEGER_H_INCLUDED
