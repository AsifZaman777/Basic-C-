#include<iostream>
using namespace std;
int main()
{
    int s=100;

    int arr[s]={45,67,98,34,6,5,6};
    int*p=&arr[0];
    for(int i=0;i<10;i++)
        for(i=0;i<10;i++)
        cout<<*(arr+i)<<endl;
    return 0;
}
