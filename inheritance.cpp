#include<iostream>
using namespace std;
class Parent
{
//    protected: public: private:(By default)
   int x;
   int y;
   public:
   Parent(int a,int b):x(a),y(b){}
   void display()
   {
    cout<<"x= "<<x<<" y= "<<y<<endl;
   }
};

class Child:public Parent
{
    int z;
    public:
    Child(int a, int b, int c):Parent(a,b),z(c){}
};
int main()
{
    Child c(10,20,30);
    // c.x=10;
    // c.y=20;
    c.display();
    return 0;
}