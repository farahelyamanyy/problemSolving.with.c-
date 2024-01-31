#include <iostream>
using namespace std;

int main()
{
	int a , b , c , d , result;
	cin >> a >> b >> c >> d ;
	int w , x, y, z;

	w = a % 100;
	x = b % 100;
	y = c % 100;
	z = d % 100;


	result = w *x * y * z;
	if (result % 100 <= 9) {
		cout << "0" <<result%100;
	}
	else {
		cout << result % 100;
	}
	
	
}