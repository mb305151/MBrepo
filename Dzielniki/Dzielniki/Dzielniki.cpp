﻿#include <iostream>

using namespace std;

int main()
{
	int64_t n;
	cin >> n;
	for (int64_t i = 1; i <= n; i++)
		if (n % i == 0) {
			cout << i << "\n";

		}
	return 0;

}
