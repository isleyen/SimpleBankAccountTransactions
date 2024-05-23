#include <iostream>
#include "account.h"

using namespace std;

insan::insan() {
	cout << "Defult constructor cagirildi." << endl;
}

insan::insan(std::string isim, int yas) {
	setYas(yas);
	setIsim(isim);
}

void insan::setIsim(std::string isim) {
	this->isim = isim;
}

std::string insan::getIsim() {
	return isim;
}

int insan::getYas() {
	return yas;
}

void insan::setYas(int yas) {
	if (yas <= 30) this->yas = yas;
	else cerr << "Girilen yas degeri gecerli degildir!" << endl;
}

void insan::printInsan() {
	cout << "Isim: " << getIsim() << "\n" << "Yas: " << getYas() << endl;
}

hesap::hesap() {
	cout << "Defult insan constructor cagirildi" << endl;
}

hesap::hesap(int hesapBakiyesi, std::string isim, int yas) : insan(isim, yas) { 
	setHesap(hesapBakiyesi);
}

void hesap::setHesap(int hesapBakiyesi) {
	if (hesapBakiyesi >= 0) this->hesapBakiyesi = hesapBakiyesi;
	else cerr << "Lutfen gecerli bir bakiye giriniz!" << endl;
}

int hesap::getHesap() {
	return hesapBakiyesi;
}

void hesap::printHesap() {
	printInsan();
	cout << "Guncel Hesap Bakiyeniz: " << getHesap() << " TL " << endl;
}

void hesap::yatirHesap(int eklenen) {
	hesapBakiyesi += eklenen;
}

void hesap::cekHesap(int cekilen) {
	if (cekilen <= hesapBakiyesi) hesapBakiyesi -= cekilen;
	else cerr << "En fazla " << getHesap() << " TL kadar cekebilirsiniz." << endl;
}