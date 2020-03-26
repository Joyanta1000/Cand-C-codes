#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	double number, n; //n=3
	cin>>number;
char s[2];
sprintf (s, ".%d", int(modf(number, &n)*10)); 
                     //modf(number, &n)=0.142 s='.1'
cout << s;
}
