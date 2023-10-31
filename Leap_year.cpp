#include<iostream>
int main()
{   using namespace std;
    int a;
    cout<<"Enter the year";
    cin>> a;
    if(a%4==0)
    {
        if(a%100==0 && a%400!=0)
        {
            cout<<"The given year is not a leap year";
        }
        else
        {
            cout<<"The given year is a leap year";
        }
        
    }
    return 0;
}
