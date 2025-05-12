//Task 1

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
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



	return 0;
}