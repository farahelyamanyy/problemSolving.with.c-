#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
        double a;
	const double PI = 3.141592653;
        double area;

	cin>>a; 
        area=PI*a*a;

	cout<< fixed << setprecision(9);
        cout<<area;
	
}