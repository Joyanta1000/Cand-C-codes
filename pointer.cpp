#include<iostream>
//#include<cstdio>
using namespace std;
int main()
{
    int size;
    int *arr = new int[size];
    std::cin>>size;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<','<<'\n';
    }
    delete arr;
}

