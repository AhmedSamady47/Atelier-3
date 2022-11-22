#include <iostream>

using namespace std;

class Shape
{
public:
  float l, h;
  Shape(float l, float h)
  {
    this->l = l;
    this->h = h;
  }
};

class Rectangle: public Shape
{
public:
  Rectangle(float l, float h) : Shape(l, h) {}

  float area()
  {
    return (l * h);
  }
};

class Triangle: public Shape
{
public:
  Triangle(float l, float h) : Shape(l, h) {}

  float area()
  {
    return (l * h / 2);
  }
};
// Driver code
int main (){

  Rectangle rectangle(7,8);
  Triangle triangle(5,6);
  cout<<endl;
  cout<<"Surface du rectangle = "<<rectangle.area()<<endl;
  cout<<"Surface du triangle = "<<triangle.area()<<endl; 
  return 0;
}