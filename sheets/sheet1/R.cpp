#include <iostream>
using namespace std;

int main()
{
	long long a ;
	cin >> a;

	int years = a / 365;
	int months = (a % 365) / 30;
	int days = (a % 365) % 30;

	cout << years << " years\n" << months << " months\n" << days << " days";

}