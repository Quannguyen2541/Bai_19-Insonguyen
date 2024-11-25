// Bai_19-Insonguyen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool kiemtrasonguyen(int s) {
	int dem = 0;
	for (int i = 1; i <= s; i++)
	{
		if (s % i == 0) {
			dem++;

		}
	}
	if (dem == 2) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int n;
	cout << "nhap so:\n"; cin >> n;
	for (int r = 1; r <= n; r++) {
		if (kiemtrasonguyen(r) == true) cout << r << " ";
	}
	/*
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			dem++;

		}
	}
	//cout << "so dem =" << dem << endl;
	if (dem == 2) {
		cout << "So " << n << " la so nguyen to\n";
	}
	else{
		cout << "So " << n << " khong phai la so nguyen to\n";
	}*/
	return 0;

}
