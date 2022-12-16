#pragma once
#include <iostream>
using namespace std;

class Flat{
	int square;
	int price;
public:
	void f() {
		cout << "write square "; cin >> square;
		cout << "write square "; cin >> price;
	}
	void show() {
		cout << "square " << square << endl;
		cout << "square " << price << endl;
	}
	bool operator==(Flat& a) {
		if (a.square == square)return true;
		else return false;
	}
	void operator=(Flat& a) {
		square = a.square;
		price = a.price;
	}
	bool operator>(Flat& a) {
		if (a.price > price)return true;
		else return false;
	}
};

