#include<iostream>
#include<cmath>
#include<string.h>
#include <iomanip>
#include <sstream>

std::string getFloatWithoutLeadingZero(double total)
{
    std::stringstream ss;
    //ss << std::setw(2);
    ss << std::fixed << total;
    std::string str = ss.str();
    if(total > 0.f && total < 1.f)
        return str.substr(1,str.size());
}

int main()
{
	double R,total;
	int n;
	while(std::cin>>R>>n)
	{
		if(n>0 && n<=25 && R>0.0 && R<99.999)
	{
		total = pow(R,n);
		if(total!=(int)total)
		{
		std::cout << getFloatWithoutLeadingZero(total) << std::endl;
		}
		else
		{
		break;
		}
	}
	}
}
