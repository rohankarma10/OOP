#include <iostream>
using namespace std;

// Define a class for student
class Student 
{
private:
    // Declare private variables for the student's name and percentage
    string name;
    float percentage;

public:
    // Declare a constructor to initialize the student's name and percentage
    Student(string n, float p) 
    {
        name = n;
        percentage = p;
    }

    // Declare a function to get the student's name
    string getName() 
    {
        return name;
    }

    // Declare a function to get the student's percentage
    float getPercentage() 
    {
        return percentage;
    }
};

int main() 
{
    // Create two Student objects with different names and percentages
    Student student1("Rohan", 87.5);
    Student student2("Jenna", 92.5);

    // Compare the percentages of the two students
    if (student1.getPercentage()>student2.getPercentage()) 
    {
        cout<<student1.getName()<<" has a higher percentage than "<< student2.getName()<<endl;
    } 
    else if (student1.getPercentage() < student2.getPercentage()) 
    {
        cout<<student2.getName()<<" has a higher percentage than "<<student1.getName()<<endl;
    } 
    else 
    {
        cout<<student1.getName()<<"and"<<student2.getName()<<"have the same percentage"<<endl;
    }
    return 0;
}
