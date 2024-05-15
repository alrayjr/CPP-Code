#ifndef Ray_Adrian_Prob5_Assignment3_H_INCLUDED
#define Ray_Adrian_Prob5_Assignment3_H_INCLUDED

class Rectangle2D
{
public:
    Rectangle2D();
    Rectangle2D(double x, double y, double width, double height);

    double getX() const;
    double getY() const;
    double getWidth() const;

    double getArea() const;
    double getPerimeter() const;

    bool contains(double x, double y) const;
    bool contains(const Rectangle2D &r) const;
    bool overlaps(const Rectangle2D &r) const;




private:
    double x ;
    double y ;
    double width;
    double height;
};

#endif // Rectangle2D_H_INCLUDED
