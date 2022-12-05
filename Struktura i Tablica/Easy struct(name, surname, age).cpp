#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
#include<algorithm>



int main()
{

    setlocale(LC_CTYPE, "Polish");


    string imiona[] = { "Tomasz",  "Jan",  "Pawel" };
    string nazwiska[] = { "Borowy",  "Tragosz",  "Tyburski" };
    int wiek[] = { 25,22,48 };

    struct osoba {
        string imie;
        string nazwisko;
        string wiek;
    };

    osoba osoby[2];

    for (int i = 0; i < 2; i++) {															//tworzenie 
        osoby[i].imie = imiona[i];
        osoby[i].nazwisko = nazwiska[i];
        osoby[i].wiek = wiek[i];
    }
    for (int i = 0; i < 3; i++) {																								//wypisujemy paski
        cout << imiona[i] << " " << nazwiska[i] << " "<< wiek[i] << endl;
    }
}