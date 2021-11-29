#include<iostream>
using namespace std;
int main()
{
    int i=0;
    for(i;i<=100;i++)
    {
        if(i%3==0)
    
         {
             continue;
         }
        cout<<i<<endl;
         
    }
    return 0;
}