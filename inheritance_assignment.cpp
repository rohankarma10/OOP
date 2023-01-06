#include<iostream>
using namespace std;
class Base
{
   protected:
   int a,b;
   public:
  void input()
  {
      cout<<"Enter the value of a and b:"<<endl;
      cin>>a>>b;
  }
};

class Derived:public Base
{
private:
    int m,n;
public:
    void getdata()
    {
        cout<<"Enter the value of m and n:"<<endl;
        cin>>m>>n;
    }
    void display()
    {
        cout<<endl;
        cout<<"m="<<m<<"  n="<<n<<endl;
        cout<<"a="<<a<<"  b="<<b<<endl;
    }
};

int main()
{
    Derived ob;
    ob.input();
    ob.getdata();
    ob.display();
}

