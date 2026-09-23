#include <iostream> 
#include <Windows.h>

using namespace std;
int main()
{
	double m; // вхідний параметр
	double n; // вхідний параметр
	double z1;
	//double z2; 
	cout << "m = "; cin >> m;
	//cout << "n = "; cin >> n;
	z1 = 1 - (0.25 * pow(sin(2 * m), 2)) + cos(2 * m);
	//z2 = pow(cos(n), 2) + pow(cos(n), 4);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}