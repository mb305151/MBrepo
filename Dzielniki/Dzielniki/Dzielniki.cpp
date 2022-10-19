
#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		if (n % i == 0 and i<1000000000000) {
			cout << i << "\n";

		}
	return 0;

}