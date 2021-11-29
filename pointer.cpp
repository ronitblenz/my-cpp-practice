#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int* ptr;
    ptr =&a;

    cout<<"The Address of A is "<<ptr<<endl;
    return 0;
}