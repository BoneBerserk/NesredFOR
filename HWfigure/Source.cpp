#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define tab "\t"
//#define rectangle
//#define triangle
//#define triangle2

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef rectangle

	int n;
	int y;
	cout << "������� ����� ";  cin >> n;
	cout << "������� ������ "; cin >> y;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			cout << '*';
		}
		cout << endl;
#endif // rectangle
#ifdef triangle
		int n;
		int y = 1;
		cout << "������� ����� ";  cin >> n;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= y; j++)
			{
				cout << '*';
			}
			if (y != n)y++;
			cout << endl;
#endif // triangle
#ifdef triangle2
			int n;

			cout << "������� ����� ";  cin >> n;
			int y = n;
			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= y; j++)
				{
					cout << '*';
				}
				if (y != 1)y--;
				cout << endl;
#endif // triangle2



	}





}