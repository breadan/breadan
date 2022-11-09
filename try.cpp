#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int a1 = 7 - a;
	if (a1 < 0) {
		a1 = a1 * -1;
	}
	int b1 = 7 - b;
	if (b1 < 0) {
		b1 = b1 * -1;
	}
	int c1 = 7 - c;
	if (c1 < 0) {
		c1 = c1 * -1;
	}
	int res = a1 + b1 + c1;
	cout << res;

	return 0;
}