#include<iostream>
#include<string>
using namespace std;
class Person
{
    string name;
    int age;
    public:
    Person(string n,int a):name(n),age(a){}
    void display()
    {
        cout<<"Name: "<<name<<" Age: "<<age<<endl;
    }
};

class Student:public Person
{
    double marks_obtained;
    public:
    Student(string n,int a, double m):Person(n,a),marks_obtained(m){}
    double get_percent()
    {
        return marks_obtained/5;
    }
};
int main()
{
    Student s("Rohan",19,500);
    s.display();
    cout<<"percentage obtained:"<<s.get_percent()<<"%"<<endl;
    return 0;
}