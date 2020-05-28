#include <iostream>
#include <fstream>
#include<bits/stdc++.h>
using namespace std;

int main() {
ifstream matha;
matha.open("C://temp//program.txt", ios::in);
int count = 0,n;
char c;
while(!matha.eof())
{
matha.get(c);

if(c=='('||c==')')
{
count++;
}

}
cout<<count*2<<endl;
matha.close();
system("pause");
}
