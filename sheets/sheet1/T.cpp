#include <iostream>
using namespace std;

int main()
{
	int a , b , c ;
	cin >> a >> b >> c;
	int min, mid, max;

	if (a >= b && a >= c )
	{
		max = a;
		if (b >= c) {
			mid = b;
			min = c;
		}
		else
		{
			mid = c;
			min = b;
		}
	}
	else if(b >= a && b >= c)
	{
		max = b;
		if (a >= c) {
			mid = a;
			min = c;
		}
		else {
			mid = c;
			min = a;
		}
	}
	else 
	{
		max = c;
		if (a >= b) 
		{
			mid = a;
			min = b;
		}
		else
		{
			mid = b;
			min = a;
		}
	}

	cout << min << "\n" << mid << "\n" << max << "\n" << endl;
	cout << a << "\n" << b << "\n" << c << endl;

}