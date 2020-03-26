#include<bits/stdc++.h>
using namespace std;
main()
{
    char a[100], b[100], c[100], temp[100];
    int i,j,n,m;
    cin>>n;
     for (i=0;i<n;i++)
        {
        	cin>>a[i];
            //strcpy(a[i],a[i]);
            //strcpy(tname[i], name[i]);
            //gets(a);
        }
       // m = strlen(a);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp[j] = a[i];
            a[i] = a[j];
            a[j] = temp[j];
            j = j-1;
        }
    }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
        //puts(a);
    }
}

