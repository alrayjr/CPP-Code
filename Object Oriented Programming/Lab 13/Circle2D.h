#ifndef CIRCLE2D_H_INCLUDED
#define CIRCLE2D_H_INCLUDED

class Circle2D
{
public:
    Circle2D();
    Circle2D(double x, double y, double radius);
    Circle2D(const Circle2D & circle);
    ~Circle2D();

    double getX() const;
    double getY() const;
    double getRadius() const;
    static int getNumberOfCircles();

    double getArea() const;
    double getPerimeter() const;

    bool contains(double x, double y) const;
    bool contains(const Circle2D& circle) const;
    bool overlaps(const Circle2D& circle) const;




private:
    double x ;
    double y ;
    double radius;
    static int numberOfCircles;
};

#endif // CIRCLE2D_H_INCLUDED
