#include <iostream>
using namespace std;
//Inline function for addition
inline int add_Numbers(int a, int b) 
{
	int c=a+b;
    return c;
}
//Function for multiplication
int multiply_Numbers(int x,int y,int z=1) 
{
	int w=x*y*z;
    return w;
}

int main() 
{
    int sum=add_Numbers(5, 7);
    int product=multiply_Numbers(3, 4);
    cout<<"The Sum is: "<<sum<<endl;
    cout<<"The Product is: "<<product<<endl;
    return 0;
}
/*Output:
The Sum is: 12
The Product is: 12*/