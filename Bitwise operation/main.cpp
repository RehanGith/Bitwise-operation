#include <iostream>
using namespace std;

int merging(int &num) {
	int a = 1;
	a = a << 1;
	num = num | a;
	return num;
}
bool masking(int num) {
	int a = 1;
	a = a << 3;
	if (num = a & num)
		return true;
	return false;
}
int main() {
	int num = 8;
	cout << (num & 2) << endl; // bitwise and operatin
	cout << (num | 2) << endl; // bitwise or operation
	if (masking(num))
		cout << "That 3 bit is on" << endl;
	cout << merging(num) << endl;
	cout << num << endl;

	return 0;
}