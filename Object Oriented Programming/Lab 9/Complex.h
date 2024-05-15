#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
public:
    Complex();

    Complex(double _real, double _img);
    double getReal();
    void setReal(double _real);
    double getImg();
    void setImg(double _img);
     addition(Complex &comp);



private:
    double real;
    double img;

};



#endif // COMPLEX_H_INCLUDED
