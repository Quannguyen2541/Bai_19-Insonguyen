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
int main() {
	int n;
	cout << "nhap so:\n"; cin >> n;
	for (int r = 1; r <= n; r++) {
		if (kiemtrasonguyen(r) == true) cout << r << " ";
	}
	
	return 0;

}
