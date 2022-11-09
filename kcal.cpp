#include<iostream>
using namespace std;
/*We have a drink that has AA kilocalories
of energy per 100100 milliliters. How many 
kilocalories of energy does
BB milliliters of this drink have?*/
int main()
{
	double n=0, num=0;
	cin >> n >> num;
	double res = num / 100;
	double res2 = n * res;
	cout << res2;



	return 0;
}

