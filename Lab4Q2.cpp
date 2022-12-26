#include <iostream>
using namespace std;

int main()
{ 
    int height;
    cin>>height;
    if (height %2!=1)
    {
cout<< "enter odd number";
return 0;
    }

    int i,j;
    int stars=height;
    int spaces=0;
    bool half= false;
    for (i=0; i<height; i++)
    {
       for ( j=0; j<spaces;j++)
       cout<<" ";
       for (j=0;j<stars;j++)
       cout<<"*";

       cout<< endl;
       if(half){
        stars +=2;
        spaces -=1;
       }
       else {
        stars-=2;
        spaces +=1;
       }
       if (stars==1)
       half =true;       

    }
}
