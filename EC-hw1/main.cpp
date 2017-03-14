#include <iostream>

static int count;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

// Ackermann
int A(int m, int n)
{
	count++;
	std::cout << "A(" << m << "," << n << ")";
	std::cout << " => ";
	if (m == 0)
	{
		return n + 1;
	}
	else if (m > 0 && n == 0)
	{
		return A(m-1,1);
	}
	else
	{
		int c = A(m,n-1);
		return A(m-1,c);
	}
}


int main() {
	gcd(12,15);
	std::cout << gcd(12,15) << "\n\n\n";
	gcd(228,133);
	std::cout << gcd(12,15) << "\n\n\n";
	gcd(576,414);
	std::cout << gcd(576,414) << "\n\n\n";
	gcd(1071,924);
	std::cout << gcd(1071,924) << "\n\n\n";

	A(1,1);
	std::cout << "\n\n\n";
	A(2,2);
	std::cout << "\n\n\n";
	A(2,3);
	std::cout << "\n\n\n";
	A(3,3);
	std::cout << "\n\n\n";
	return 0;
}
