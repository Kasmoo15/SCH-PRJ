#include <iostream>



int main()
{
    std::cout << "Enter the numerator" << std::endl;
    double numerator;
    std::cin >> numerator;

    std::cout << "Enter the denominator" << std::endl;
    double denominator;
    std::cin >> denominator;


    double result = 1;
    for (int n = 1; n <= denominator; n++)
    {

        double wallis_num = 2*n;
        double wallis_denom_min = 2*n-1;
        double wallis_denom_max = 2*n+1;


        double calcule = (wallis_num / wallis_denom_min) * (wallis_num / wallis_denom_max);
        result = result * calcule;

        std::cout << result << std::endl;



    }
}
