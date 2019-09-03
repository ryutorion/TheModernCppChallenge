#include <iostream>
#include <cstdint>
#include <numeric>
#include <vector>

using namespace std;

int main(int argc, char * argv[])
{
	uint64_t n;
	vector<uint64_t> ns;
	cout << "input natural numbers delimited by newline (end with Ctrl-Z(Windows) or Ctrl-D(other))> ";
	while(cin >> n)
	{
		ns.push_back(n);
	}

	if(ns.size() < 2)
	{
		cerr << "Please input two or more natural numbers" << endl;
		return system("pause");
	}

	cout << accumulate(ns.cbegin(), ns.cend(), uint64_t(1), lcm<uint64_t, uint64_t>) << endl;

	return system("pause");
}
