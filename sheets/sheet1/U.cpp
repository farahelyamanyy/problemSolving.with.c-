#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a  ;
	cin >> a ;
	int b = a;


	if ((a - b) == 0) {
		cout << "int " << b;
	}
	else{
		cout << setprecision(3);
		cout << "float " << b << " " << a - b;
	}
}