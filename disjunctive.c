#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<char,float>>set1,set2;
    char a1;
    float e1;
    int i,j,n,n2;
    cout<<"Number of elements\n";
    cin>>n;
    cout<<"Elements of set\n";
    for(i=0;i<n;i++)
    {
        cin>>a1>>e1;
        set1.push_back({a1,e1});
    }

    cout<<"Number of elements2\n";
    cin>>n2;
    cout<<"Elements of set2\n";
    for(i=0;i<n2;i++)
    {
        cin>>a1>>e1;
        set1.push_back({a1,e1});
    }
}
