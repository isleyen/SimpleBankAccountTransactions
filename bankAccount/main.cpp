#include <iostream>
using namespace std;
#include "account.h"


void main() {
	
	hesap hesap1(5000, "Ahmet Isleyen", 19);
	hesap1.printHesap();
	cout << "\n";
	//hesap1.cekHesap(700);
	//hesap1.printHesap();
	//cout << "\n";
	hesap1.cekHesap(4500);
	hesap1.printHesap();
	cout << "\n";
	//hesap1.yatirHesap(1400);
	//hesap1.printHesap();
	//cout << "\n";
}