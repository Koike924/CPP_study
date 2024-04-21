#include <iostream>
#include "func.h"

void calc(const unsigned int num1, const unsigned int num2){
    std::cout << "num1=" << num1 << ", num2=" << num2 << std::endl;
    std::cout << "和" << sum(num1, num2) << std::endl;
    std::cout << "平均" << ave(num1, num2) << std::endl;
    std::cout << "標準偏差" << stddev(num1, num2) << std::endl << std :: endl;
}

int main(void)
{
    calc(1, 10);
    calc(10, 1);
}
