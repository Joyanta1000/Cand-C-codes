#include<iostream>
#include<stack>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::stack<std::string> newstack;
    newstack.emplace ("We are here to see the application use of emplace function in stacks");
    newstack.emplace ("The function adds new elements are the top of the stack");
    while (!newstack.empty () )
    {
        std::cout << newstack.top () << "\n";
        newstack.pop ();
    }
    return 0;
}
