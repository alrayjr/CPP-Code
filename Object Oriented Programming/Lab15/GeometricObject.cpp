#include "GeometricObject.h"

GeometricObject::GeometricObject()
{
  color = "White";
  filled = false;
}

GeometricObject::GeometricObject(const string & _color, bool _filled)
{
  //color = _color;
  setColor(_color);
  setFilled(_filled);
}

void GeometricObject::setColor(const string & _color)
{
  color = _color;
}

void GeometricObject::setFilled(bool _filled)
{
  filled = _filled;
}
    
string GeometricObject::getColor() const
{
  return color;
}
    
bool GeometricObject::getFilled() const
{
  return filled;
}

string GeometricObject::toString() const
{
  return "Geometric Object";
}