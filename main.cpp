#include <iostream>

struct Date
{
    unsigned int year;
    const unsigned int month;
    unsigned int day;
};


int main(){
    unsigned int a = 1998;
    Date d = {a,a-1991,d.year-1994};
    // Date e = {year}
    std::cout << "year " << d.year << std::endl;
    std::cout << "month " << d.month << std::endl;
    std::cout << "day " << d.day << std::endl;
    return 0;
}

