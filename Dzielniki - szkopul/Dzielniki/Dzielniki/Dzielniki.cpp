#include <iostream>

 using namespace std;

 int main()
 {
	 long double n;
	 cin >> n;
	 for (long double i = 1; i <= n; i++)
		 if (n % i == 0) {
			 cout << i << "\n";

		 }
	 return 0;
	 
 }
