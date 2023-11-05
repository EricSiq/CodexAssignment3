#include <iostream>
using namespace std;
//initialising days enumeration
enum Days{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

//Function calculating and returning number of days remaining in the week using the Days enum
int calculateDaysRemaining(Days today) 
{
    int daysRemaining =7-today;
    return daysRemaining;
}

int main() 
{
    Days currentDay=Wednesday;
    int daysRemaining=calculateDaysRemaining(currentDay);
    cout<<"Number of days remaining in the week: "<<daysRemaining<<endl;
    return 0;
}
//Output:Number of days remaining in the week: 4