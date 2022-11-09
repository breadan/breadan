#include<iostream>
using namespace std;

/*You are given a person's systolic blood pressure, 
AA, and diastolic blood pressure, BB.
Find the mean arterial pressure, CC,
which we define as follows:

C = \frac{A-B}{3} +BC= 
3
A−B
​
 +B.*/
int main()
{
	double a, b;
	double c = 0;
	cin >> a >> b;
	c = ((a - b) / 3) + b;
	cout << c;






	return 0;
}