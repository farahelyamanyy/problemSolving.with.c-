#include <iostream>
using namespace std;

int main()
{
	long a;
	cin >> a;

	if ((a / 1000) % 2 == 0) {
		cout << "EVEN";
	}
	else if ((a / 1000) % 2 != 0) {
		cout << "ODD";
	}
	 
}