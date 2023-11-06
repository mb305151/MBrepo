// Podzielne.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
	int a, b;
	int count = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			count++;
		}
	}
	cout << count++<<"\n";
}
//commituj sie
//najssssssss

