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

//#include <iostream>
//#include <cmath>


//int main() 
//{
    //int k;
    //double x;

    //std::cout << "Input k: ";
    //std::cin >> k;

    //std::cout << "Input x: ";
    //std::cin >> x;

    //double sum = 0.0;

    //for (int n = 1; n <= k; ++n) 
    //{
        //sum += std::pow(x, 2 * (n - 1)) / std::pow(2 + 4 * (n - 1), 2);
    //}

    //std::cout << "Sum equals: " << sum << std::endl;

    //return 0;

//}

//Task 3

//#include <iostream>
//#include <cmath>

//int main()

//{
    //double epsilon;

    //std::cout << "Input epsilon value: ";
    //std::cin >> epsilon;

    //double sum = 0.0;
    //double term = 1.0;
    //int i = 1;

    //while (std::abs(term) >= epsilon) 
    //{
        //sum += term;
        //term = 1.0 / (i * (i + 1));
        //i++;
    //}

    //std::cout << "The sum with a given epsilon value which is: " << epsilon << " equals " << sum << std::endl;

    //return 0;
//}

//Task 4

#include <iostream>
#include <iomanip>
#include <cmath>

// Вспомогательная функция для вычисления члена ряда
double term(int n, double x) 
{
    return std::pow(x, 2 * n + 1) / ((2 * n + 1) * std::pow(2, n));
}

// Функция для вычисления суммы ряда с заданной точностью
double f(double x, double epsilon, int& n) 
{
    double sum = 0.0;
    double current_term = term(0, x);
    n = 0;

    while (std::abs(current_term) >= epsilon) 
    {
        sum += current_term;
        n++;
        current_term = term(n, x);
    }

    return sum;
}

int main() 
{
       
        double a, b, epsilon;

        std::cout << "Input a (it should be 0): ";
        std::cin >> a;

        std::cout << "Input b (it should be 0.99): ";
        std::cin >> b;

        std::cout << "Input epsilon: ";
        std::cin >> epsilon;

        double h = 0.1;
        double x = a;
        int i = 1;

        std::cout << std::setw(10) << "No." << std::setw(10) << "x" << std::setw(20) << "F(x)" << std::setw(10) << "n" << std::endl;

        while (x <= b) {
            int n;
            double result = f(x, epsilon, n);
            std::cout << std::setw(10) << i << std::setw(10) << x << std::setw(20) << result << std::setw(10) << n << std::endl;
            x += h;
            i++;
        }

    return 0;
}