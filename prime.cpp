#include<iostream>  
#include<stack>  
#include<string>  
int main()  
{  
    std::stack<std::string> newstack;  
    newstack.emplace ("I am the first line");  
    newstack.emplace ("I am the second one");  
    std::cout << "Contents of newstack: \n";  
    while (!newstack.empty () )  
    {  
        std::cout << newstack.top () << "\n"?;  
        newstack.pop ();  
    }  
    return 0;  
}  
