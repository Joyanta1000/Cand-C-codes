#include<bits/stdc++.h>
using namespace std;
main()
{
	char a[100] = "a + b = c * i; ";
	//scanf("%c",&a[100]);
//	gets(a);
int z = strlen(a);
for(int i=0;i<z;i++){
		 if(a[i]=='i'||a[i]=='j')
		 {
		 	cout<<a[i]<<"\t";
		 	cout<<"is an identifier\n";
		 	//cout<<"Int Type"<<"\n"; 	
		 }
		  else if(a[i]=='a'||a[i]=='b'||a[i]=='c'||a[i]=='d'||a[i]=='e'||a[i]=='f')
		 {
		 	cout<<a[i]<<"\t";
		 	cout<<"is a keyword\n";
		 	//cout<<"Char Type\n";
		 }
		  else if(a[i]=='+'||a[i]=='-'||a[i]=='/'||a[i]=='#'||a[i]=='*'||a[i]=='-'||a[i]=='=')
		 {
		 	cout<<a[i]<<"\t";
		 	cout<<"is an operator\n";
		 }
}
}
