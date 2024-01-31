#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 0 || n == 1) {
		cout << "-1";
	}

	int i = 1;
	while (i <= n) {
		if (i % 2 == 0) {
			cout << i << "\n";
		}
		i++;
	}
	
}