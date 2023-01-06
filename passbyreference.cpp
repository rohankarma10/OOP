#include<iostream>
using namespace std;

void swap(int&p, int&q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
}
int main()
{
    int a=2,b=3;
    cout<<"Before swap:"<<endl;
    cout<<"a="<<a<<"b="<<b<<endl;
    swap(a,b);
    cout<<"After swap:"<<endl;
    cout<<"a="<<a<<"b="<<b<<endl;
    return 0;
}