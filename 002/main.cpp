#include <iostream>
#include <cstdint>
#include <numeric>

using namespace std;

int main(int argc, char * argv[])
{
	cout << "input a natural number > ";

	uint64_t m;
	cin >> m;

	cout << "input another natural number > ";
	uint64_t n;
	cin >> n;

	cout << "gcd(" << m << ", " << n << ") = " << gcd(m, n) << endl;

	return system("pause");
}
