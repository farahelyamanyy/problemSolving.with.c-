#include <iostream>
using namespace std;

int main()
{
	int a, b;
	long c;
	char s , q;
	cin >> a >> s >> b >> q >> c ;


	if (s == '+') {
		if (a + b == c) 
		{
			cout << "Yes";
		}
		else {
			cout << a+b;
		}
	}
	else if (s == '-') 
	{
		if (a - b == c) 
		{
			cout << "Yes";
		}
		else 
		{
			cout << a-b;
		}
	}
	else if (s == '*') 
	{
		if (a * b == c) 
		{
			cout << "Yes";
		}
		else 
		{
			cout << a*b;
		}
	}
}