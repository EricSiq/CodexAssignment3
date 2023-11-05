
#include <iostream>
using namespace std;

struct Student 
{
	//Initialising variables used in function
    int studentID;
    double GPA;
};
//Function to print the student's ID and GPA
void printStudentInfo(Student s) 
{
	//Using Call by Value
    cout<<"Student ID: " <<s.studentID<<endl;
    cout<<"GPA: " <<s.GPA <<endl;
}
int main() 
{
    Student alice = {101,3.8};
    printStudentInfo(alice);
    return 0;
}
/*Output:
Student ID: 101
GPA: 3.8*/