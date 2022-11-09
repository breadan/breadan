#include<iostream>
using namespace std;

/*There is a train going from Station AA to Station BB that costs XX yen (the currency of Japan).

Also, there is a bus going from Station BB to Station CC that costs YY yen.

Joisino got a special ticket. With this ticket, she can take the bus for half the fare if she travels from Station AA to Station BB by train and then travels from Station BB to Station CC by bus.

How much does it cost to travel from Station AA to Station CC if she uses this ticket?*/
int main()
{
	int x, y;
	cin >> x >> y;
	int cost = x + (y / 2);
	cout << cost;




	return 0;
}