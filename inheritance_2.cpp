#include<iostream>
using namespace std;
class Shape
{
    protected:
    int length;
    int breadth;
};
class Rectangle:public Shape
{
    public:
    void setlength(int l)
    {
        length=l;
    }
    void setbreadth(int b)
    {
        breadth=b;
    }
    int area()
    {
        return (length*breadth);
    }

};
int main()
{
    Rectangle obj;
    obj.setlength(20);
    obj.setbreadth(10);
    // obj.length=100;
    return 0;
}