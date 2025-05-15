#include <iostream>
#include <cmath>
#include <iomanip>

//Task 1

void task1()
{
	int n;

	std::cout << "Input n: ";
	std::cin >> n;

	double sum = 0.0;

	for (int i = 1; i <= n; ++i) 
	{
		sum += 1.0 / (i * i);
	}

	std::cout << "Sum equals: " << sum << std::endl;

}

//Task 2

void task2() 
{
    int k;
    double x;

    std::cout << "Input k: ";
    std::cin >> k;

    std::cout << "Input x: ";
    std::cin >> x;

    double sum = 0.0;
    double numerator = 1.0;

    for (int n = 1; n <= k; ++n) 
    {
        int denominatorBase = 2 + 4 * (n - 1);
        double denominator = denominatorBase * denominatorBase;

        sum += numerator / denominator;

        numerator *= x * x;
    }

    std::cout << "Sum equals: " << sum << std::endl;

}

//Task 3

void task3()
{
    double epsilon;

    std::cout << "Input epsilon value: ";
    std::cin >> epsilon;

    double sum = 0.0;
    double term = 1.0;
    int i = 1;

    while (std::abs(term) >= epsilon) 
    {
        sum += term;
        term = 1.0 / (i * (i + 1));
        i++;
    }

    std::cout << "The sum with a given epsilon value which is: " << epsilon << " equals " << sum << std::endl;

}

//Task 4

// Function for calculating the sum of a series with a given accuracy
double f(double x, double epsilon, int& n) 
{
    double sum = 0.0;
    double current_term = x;
    n = 0;

    while (std::abs(current_term) >= epsilon) 
    {
        sum += current_term;
        n++;

        current_term *= (x * x * (2 * n - 1)) / (2.0 * (2 * n + 1));
    }

    return sum;
}

void task4() 
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

        while (x <= b) 
        {
            int n;
            double result = f(x, epsilon, n);
            std::cout << std::setw(10) << i << std::setw(10) << x << std::setw(20) << result << std::setw(10) << n << std::endl;
            x += h;
            i++;
        }

}

int main()
{
    task1();
    task2();
    task3();
    task4();

    return 0;
}