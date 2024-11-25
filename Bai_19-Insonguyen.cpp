// Bai_19-Insonguyen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/// <summary>
/// Ham kiem tra so nguyen to 
/// </summary>
/// <param name="so can kiem tra"></param>
/// <True la so nguyen to>
/// <false la ko phai so nguyen to>
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
bool kiemtrasochinhphuong(int p) {
	if (sqrt(p) == (int)sqrt(p)) return true;
	return false;
}
int main() {
	int n;
	cout << "nhap so:\n"; cin >> n;
	for (int r = 1; r <= n; r++) {
		if (kiemtrasonguyen(r) == true) cout << r << " ";
	}
	for (int i = 1; i < 100; i++)
	{
		if (sqrt(i) == (int)sqrt(i)) cout << i << "la so chinh phuong\n";
	}
	
	return 0;

}
