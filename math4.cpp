// math4.cpp
// ����� ����
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 15
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ������ ����
	if ((x <= 0 && x >= -R && y >= 0 && y <= R && pow((x + R), 2) + pow((y - R), 2) >= R * R)
		|| (x >= 0 && x <= R && y <= 0 && y >= -R && x * x + y * y <= R * R))
		cout << "yes" << endl;
		else
		cout << "no" << endl;
	cin.get();
	return 0;
}