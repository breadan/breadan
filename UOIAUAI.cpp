#include<iostream>
#include<string>
using namespace std;

int main()
{
	char choice;
	cin >> choice;
	if (choice == 'a' || choice == 'e' || choice == 'i' || choice == 'o' || choice == 'u')
	{
		cout << "vowel";
	}
	else {
		cout << "consonant";
	}




	return 0;
}