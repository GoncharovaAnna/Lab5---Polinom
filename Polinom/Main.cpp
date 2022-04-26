#include<iostream>
#include<locale>
#include "TList.h"
#include "THeadList.h"
#include "Monom.h"
#include "TPolinom.h"

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	TList<int> list;
	THeadList<int> headList;
	TMonom mon;
	TPolinom polinom, polinom2;



	for (int i = 1; i < 3; i++) {
		cin >> mon;
		polinom.addMonom(mon);
	}
	for (int i = 1; i < 3; i++) {

		cin >> mon;
		polinom2.addMonom(mon);
	}
	
	TPolinom res;
	TMonom monom(2, 2, 2, 2);
	cout << "Первый полином " << polinom;
	cout << "Второй полином " << polinom2;
	res = polinom * polinom2;
	cout << "Произведение полиномов " << res;
	res = polinom * 3;
	cout << "Умножение полинома на число " << res;
	res = polinom * monom;
	cout << "Умножение полинома на моном " << res;
	res = polinom + polinom2;
	cout << "Сложение полиномов " << res;
	res = polinom - polinom2;
	cout << "Вычитание полиномов " << res;
	
}