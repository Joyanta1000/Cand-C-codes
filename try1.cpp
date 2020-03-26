#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
 
std::string getFloatWithoutLeadingZero(float val)
{
    std::stringstream ss;
    //ss << std::setw(2);
    ss << std::fixed << val;
 
    std::string str = ss.str();
    if(val > 0.f && val < 1.f)
        return str.substr(1, str.size());
//    else if(val < 0.f && val > -1.f)
//        return "-" + str.substr(2, str.size()-1);
    //return str;
}
 
int main()
{
	float val;
	std::cin>>val;
	std::cout << getFloatWithoutLeadingZero(val) << std::endl;
 
    return 0;
}
