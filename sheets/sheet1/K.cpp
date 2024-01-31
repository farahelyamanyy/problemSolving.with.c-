#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long a, b, c ;

	cin >> a >> b >> c;

	cout << min(min(a,b),c) << " " << max(max(a,b),c);
	 
}