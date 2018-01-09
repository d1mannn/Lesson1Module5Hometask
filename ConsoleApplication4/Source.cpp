#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	short int task;
	do
	{
		cout << "������� ����� ������� - ";
		cin >> task;
		switch (task)
		{
		case 1:
		{
			/*�������� ���������� ������ ������ ���� ��������� ������� M.������� �������� ��������� � ������� ���������� ��������� �����.������������ ������.*/

			int m[20];
			for (int i = 0; i < 20; i++)
			{
				m[i] = -100 + rand() % 200;
				cout << "�������� ������� " << i + 1 << " = " << m[i] << endl;
			}
		} break;

		case 2:
		{
			/*������ ������������ ��� �������� �������� ����� �������� �������.
				� ������� ������� ��������� ����� ��������� ������ ������ ����������,
				�������� � ��������� �� 50 �� 100 ������������*/

			int m[20];
			for (int i = 0; i < 20; i++)
			{
				m[i] = 50 + rand() % 50;
				cout << "��� " << i + 1 << " -�� �������� = " << m[i] << endl;
			}

		} break;

		case 3:
		{
			/*��������� ������ �� ������ ��������� ����� �������, ����� �������� ��������� ��� ��������� ������� ����� ������� ������������ :
			a.��������� ������������������;
			b.������������ ������������������*/

			/*int m[8];

			for (int i = 0; i < 7; i++)
			{
				m[i] = -100 + rand() % 200;
				cout << "������ " << i + 1 << " = " << m[i] << endl;
			}
			cout << " ============ " << endl;
			for (int i = 0; i < 7; i++)
			{
				if (m[i] > m[i - 1])
					cout << m[i] << endl;
			}*/

		} break;

			case 4:
			{
				/*4.	��� ������ ����� �����.��������:
				a.�������� �� s - � ������� ������� ������������� ������
					b.�������� �� k - � ������� ������� ������ ������
					c.����� ������� ������� ������ : k - � ��� s - �.*/

				int m[100], s, k, a, b;
				do
				{
					cout << "������� �������� s - � ��������� �� 0 �� 99 - ";
					cin >> s;
					cout << "\n������� �������� k - � ��������� �� 0 �� 99 - ";
					cin >> k;

				} while ((s < 0 || s > 99) || (k < 0 || k > 99));
				
					for (int i = 0; i < 100; i++)
					{
						m[i] = -100 + rand() % 200;
						cout << i << " ------ " << m[i] << endl;
						if (i == s)
						{
							if (m[i] > 0)
								cout << "������� ������� " << m[i] << " �������� ������������� ������" << endl;
							else
								cout << "������� ������� " << m[i] << "  �� �������� ������������� ������" << endl;
							a = m[i];
						} 
						else if (i == k)
						{
							if(m[i] % 2 == 0)
								cout << "������� ������� " << m[i] << "  �������� ������ ������" << endl;
							else
								cout << "������� ������� " << m[i] << "  �� �������� ������ ������" << endl;
							b = m[i];
						}
					} 
					if (a > b)
						cout << "������� ������� � �������� " << s << " ������, ��� � �������� " << k << endl;
					else 
						cout << "������� ������� � �������� " << k << " ������, ��� � �������� " << s << endl;

				} break;

			case 5:
			{
				/*5.	��� ������.��� ��� �������� :
				a.��������� �� 20
					b.�������� �� ��������� �������
					c.��������� �� ����� �.*/
				int m[20], a[20], c[20], b = 10, x;
				for (int i = 0; i < 20; i++)
				{
					m[i] = -50 + rand() % 100;
					a[i] = m[i];
					c[i] = m[i];
					cout << i + 1 << " ==== " << m[i] << endl;
					if (i == 19)
						x = m[i];
				} 
				cout << "���������� �� 20" << endl;
				for (int i = 0; i < 20; i++)
				{
					m[i] = m[i] - 20;
					cout << i + 1 << " ==== " << m[i] << endl;
				}
				cout << "��������� �� ��������� �������" << endl;
				for (int i = 0; i < 20; i++)
				{
					a[i] = a[i] * x;
					cout << i + 1 << " ==== " << a[i] << endl;
				}
				cout << "���������� �� ����� � = 10" << endl;
				for (int i = 0; i < 20; i++)
				{
					c[i] = c[i] + b;
					cout << i + 1 << " ==== " << c[i] << endl;
				}

			} break;

			case 6:
			{
				/*6.	��� ������.������� �� ����� ������� ��� ��������������� ��������, ����� �������������*/
				int m[20];
				for (int i = 0; i < 20; i++)
				{
					m[i] = -100 + rand() % 200;
					if (m[i] > 0)
						cout << m[i] << endl;
				}
					
				for (int i = 0; i < 20; i++)
				{
					if(m[i] < 0)
						cout << m[i] << endl;
				}

			} break;

			case 7:
			{
				/*7.	� ������� �������� ���������� � ���������� �����, ���������� 20 ����������� ���������.���������� ������ ������, ������� ������ ���� �����.*/

				int m[20];
				for (int i = 0; i < 20; i++)
				{
					m[i] = 0 + rand() % 20;
					if (m[i] < 3)
						cout << "����� ������� - " << i + 1 << "\n���-�� ����� - " << m[i] << endl;
				}
			} break;

			case 8:
			{
				/*8.	������ ������, ��������� �� 14 ��������� ������ ����.����� ���������� ��������� ������ �� ��������.*/
				int m[14], sum = 0;
				for (int i = 0; i < 14; i++)
				{
					m[i] = -100 + rand() % 200;
					cout << i + 1 << " ===== " << m[i] << endl;
					if (m[i] % 2 == 0)
						sum++;
				} cout << "���-�� ������ ��������� == " << sum << endl;
			} break;

			case 9:
			{
				/*9.	������ ������, ��������� �� 12 ��������� ������ ����.�������� ����� ������, ������� �������� ������ �������� �������������������� ��������� �������*/
				int m[12], a;
				for (int i = 0; i < 20; i++)
				{
					m[i] = -100 + rand() % 200;
					cout << i + 1 << " ==== " << m[i] << endl;
					if (i == 4)
						a = m[i];
				} for (int i = 0; i < 20; i++)
				{
					if (i == 4)
						m[i] = -100 + rand() % 200;
				} cout << "���������� �������� 5�� �������� ���� " << a << endl;
				cout << "����� �������� 5�� �������� ����� " << m[4] << endl;
			} break;

			case 10:
			{
				/*10.	����� ������, ��������� �� 15 ��������� ������������� ����.
				���������� ���������� ���������, �������� ������� ������ ������� ��������*/
				int m[15], sum = 0, a;
				for (int i = 0; i < 15; i++)
				{	
					m[i] = -100 + rand() % 200;
					cout << i + 1 << " ===== " << m[i] << endl;
					if (i == 0)
						a = m[i];
				} for (int i = 0; i < 15; i++)
				{
					if (m[i] > a)
						sum++;
				} cout << "���-�� ���������, ������� ������ ������� - " << sum << endl;

			} break;
		}

	} while (task <= 11);


}