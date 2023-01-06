#include<iostream>
using namespace std;
class Shape
{
    protected:
    int length;
    int breadth;
    public:
    Shape(int l,int b):length(l),breadth(b){}
};

class Cuboid:public Shape
{
    int height;
    public:
    Cuboid(int l, int b, int h):Shape(l,b),height(h){};
    int volume()
    {
        return length*breadth*height;
    }
};
class Rectangle:public Shape
{
    string color;
    public:
    Rectangle(int l,int b, string c):Shape(l,b),color (c){};
    int area()
    {
        return length*breadth;
    }
    string getColor()
    {
        return color;
    }
};
int main()
{
    Cuboid c(10,20,30);
    cout<<"Volume="<<c.volume()<<endl;
    Rectangle r(10,20,"Red");
    cout<<r.getColor()<<" color rectangle has area of "<<r.area()<<endl;
    return 0;
}