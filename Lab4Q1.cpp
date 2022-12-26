#include <iostream>
using namespace std;

double calculatePi(int stepCount)
{
    bool plus_or_minus = true;
    double sum=0;
    double denominator=1;

    for(int i=0; i<stepCount; i++)
    {
        if (plus_or_minus)
        sum+= (4/denominator);
        else
        sum-= (4/denominator);
        plus_or_minus=!plus_or_minus;
        denominator +=2;

    }
return sum;
} 
int main()
{
    int stepCount;
    cout<< "stepCount: " ;
    cin>> stepCount;
    cout<< "result is: "<< calculatePi(stepCount);

    return 0;

}