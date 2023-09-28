#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	double x;
	double y;
	double R;
	
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if (((y >= 0 && y <= sqrt(R * R - pow(x + R, 2))) && (x >= -R && x <= 0)) || ((y >= 0 && y <= sqrt(R * R - pow(x - R, 2))) && (x >= 0 && x <= R)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;	
}