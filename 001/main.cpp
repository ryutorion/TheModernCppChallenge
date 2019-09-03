#include <iostream>
#include <cstdint>
#include <iomanip>

using namespace std;

int main(int argc, char * argv[])
{
	cout << "input a natural number > ";

	uint32_t limit;
	cin >> limit;

	uint64_t sum = 0;
	for(uint32_t i = 3; i < limit; ++i)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	cout << "sum of 3x or 5x (less than " << limit << ") = " << sum << endl;

	return system("pause");
}
