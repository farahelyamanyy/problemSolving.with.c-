#include <iostream>
using namespace std;

int main()
{
	char X ;

	cin >> X;

	if (X >= 97 && X <= 122)
	{
		cout << "ALPHA" << endl;
		cout << "IS SMALL" << endl;
	}
	else if (X >= 65 && X <= 90) 
	{
		cout << "ALPHA" << endl;
		cout << "IS CAPITAL" << endl;
	}
	else {
		cout << "IS DIGIT" << endl;
	}
	 
}