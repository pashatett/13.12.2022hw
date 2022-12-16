#pragma once
#include <iostream>
using namespace std;

class Overcoat{
	string type;
	int price;
public:
	void f() {
		cout << "write type overcoat"<<endl; cin >> type;
		cout << "write price" << endl; cin >> price;
	}
	bool operator==(Overcoat &a) {
		if (a.type == type)return true;
		else return false;
	}
	void operator=(Overcoat& a) {
		type = a.type;
		price = a.price;
	}
	bool operator>(Overcoat& a) {
		if (a.price > price)return true;
		else return false;
	}
	void show() {
		cout << "type " << type;
		cout << "price " << price;
	}
};

