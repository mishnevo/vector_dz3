#include "Vector.h"

int main()
{
	double x, y;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���������� � ������� �������: " << endl;
	cin >> x;
	cout << "������� ���������� � ������� �������: " << endl;
	cin >> y;
	Vector vector(x, y);
	vector.print();
	cout << "����� ������� �������: " << vector.lenght(x, y) << endl << endl;
	cout << "������� ���������� � ������� �������: " << endl;
	cin >> x;
	cout << "������� ���������� � ������� �������: " << endl;
	cin >> y;
	Vector vector1(x, y);
	vector1.print();
	cout << "����� ������� �������: " << vector1.lenght(vector1.GetX(), vector1.GetY()) << endl;
	cout << "��������� ������������: ";
	cout << vector.scalar(vector1.GetX(), vector1.GetY());
}