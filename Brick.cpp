#include<iostream>
using namespace std;

/*We have a truck, which can carry at most NN kilograms.
We will load bricks onto this truck, each of which weighs 
WW kilograms. 
At most how many bricks can be loaded?
Input
Input is given from Standard Input in the following format:

Output
Print an integer representing the maximum number of bricks that can be loaded onto the truck.

*/
int main()
{
	int totalw=0, molecularweight=0;
	cin >> totalw >> molecularweight;
	int res = totalw / molecularweight;
	cout << res;

		


	return 0;
}