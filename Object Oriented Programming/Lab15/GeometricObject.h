#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H

#include <string>
using namespace std;

class GeometricObject
{
  public:
    GeometricObject();
    GeometricObject(const string & _color, bool _filled);

    void setColor(const string & _color);
    void setFilled(bool _filled);
    string getColor() const;
    bool getFilled() const;

    string toString() const;

  private:
    string color;
    bool filled;
};
#endif
