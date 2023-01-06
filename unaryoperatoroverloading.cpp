//c++ code to overload unary operator: ++
#include<iostream>
using namespace std;

class Count
{
    int value;
    public:
    Count(int);
    ~Count();//destructor being called
    void operator ++();
    void operator ++(int);
    int getValue();
};
Count::Count(int i):value(i)
{
    cout<<"constructor get called:"<<endl;
}
Count::~Count()
{
    cout<<"destructor get called at last:"<<endl;
}
void Count::operator ++()
{
    ++value;
}
void Count::operator ++(int)
{
    value++;
}
int Count::getValue()
{
    return value;
}

int main()
{
    Count a(10);
    cout<<"Before increment: value="<<a.getValue()<<endl;
    a++;
    cout<<"after post increment: value="<<a.getValue()<<endl;
    ++a;
    cout<<"value after pre increment: value="<<a.getValue()<<endl;
    return 0;
}

