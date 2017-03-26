#include <iostream>

int gcd(int a, int b, int& c);

// Ackermann
int A(int m, int n, int& c, bool print);


int main() {
	int count;
	std::cout << "GCD(12,15): " << gcd(12,15,count) << '\n';
	std::cout << "Count: " << count << "\n\n";
	count = 0;
	std::cout << "GCD(228,133): " <<  gcd(228,133,count) << '\n';
	std::cout << "Count: " << count << "\n\n";
	count = 0;
	std::cout << "GCD(576,414): " <<  gcd(576,414,count) << '\n';
	std::cout << "Count: " << count << "\n\n";
	count = 0;
	std::cout << "GCD(1071,924): " << gcd(1071,924,count) << '\n';
	std::cout << "Count: " << count << "\n\n";
	count = 0;

	A(1,1,count,true);
	std::cout<<A(1,1,count,false) << '\n';
	std::cout << "Count: " << count << "\n\n";
	count = 0;

	A(2,2,count,true);
	std::cout<<A(2,2,count,false) << '\n';
	std::cout << "Count: " << count << "\n\n";
	count = 0;
	A(2,3,count,true);
	std::cout<<A(1,1,count,false) << '\n';
	std::cout << "Count: " << count << "\n\n";
	count = 0;

	A(3,3,count,true);
	std::cout<<A(1,1,count,false) << '\n';
	std::cout << "Count: " << count << "\n\n";
	return 0;
}

int gcd(int a, int b, int& c)
{
	c++;
	if (b == 0)
		return a;
	return gcd(b, a % b, c);
}

int A(int m, int n, int& c, bool print)
{
	c++;
	if(print)
	{
		std::cout << "A(" << m << "," << n << ")";
		std::cout << " => ";
	}
	if (m == 0)
	{
		return n + 1;
	}
	else if (m > 0 && n == 0)
	{
		return A(m-1,1,c,print);
	}
	else
	{
		int d = A(m,n-1,c,print);
		return A(m-1,d,c,print);
	}
}
