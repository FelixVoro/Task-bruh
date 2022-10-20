#include<iostream>
using namespace std;
int main() {
	int n, a, b;
	n = 0;
	cin >> a;
	b = a;
	while (b > 0) {
		n += 1;
		b /= 10;
	}
	cout << n;
}