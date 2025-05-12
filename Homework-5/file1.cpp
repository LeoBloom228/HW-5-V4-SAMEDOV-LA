//Task 1

//#include <iostream>
//#include <cmath>
//#include <iomanip>

//int main()
//{
	//int n;

	//std::cout << "Input n: ";
	//std::cin >> n;

	//double sum = 0.0;

	//for (int i = 1; i <= n; ++i) 
	//{
		//sum += 1.0 / (i * i);
	//}

	//std::cout << "Sum equals: " << sum << std::endl;



	//return 0;
//}

//Task 2

#include <iostream>
#include <cmath>


int main() 
{
    int k;
    double x;

    std::cout << "Input k: ";
    std::cin >> k;

    std::cout << "Input x: ";
    std::cin >> x;

    double sum = 0.0;

    for (int n = 1; n <= k; ++n) 
    {
        sum += std::pow(x, 2 * (n - 1)) / std::pow(2 + 4 * (n - 1), 2);
    }

    std::cout << "Sum equals: " << sum << std::endl;

    return 0;

}