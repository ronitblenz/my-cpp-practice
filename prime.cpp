#include<iostream>
using namespace std;
int main()
{

    int i,num;
    cin>>num;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {   cout<<"NON PRIME"<<endl;
                break;
            }

        }
        if(i==num)
        {
        cout<<"PRIME"<<endl;
        }
    

    return 0;
}
