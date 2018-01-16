#include <stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

using namespace std;
void  main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int N, exit;
	do
	{
		cout << "������� ����� �������" << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			//7.	���������� ������� �������� ���������� � ������ � ���������� ��� �������� 10, 11, ..., 22 �����(1 ���� = 25, 4 ��).
			int i;
			for (i = 1; i <= 22; i++)
			{
				cout << i << "������ = " << i * 2.54 << "��" << endl;
			}
		}
		break;
		case 2:
		{
			//8.	���������� ������� �������� 1, 2, ... 20 �������� ��� � ����� �� �������� �����(�������� ����� �������� � ����������).
			int i;
			int kurs;
			cout << "������� ���� ������� � �����" << endl;
			cin >> kurs;
			for (i = 1; i <= 20; i++)
			{
				cout << i << " �������� = " << i*kurs << " �����" << endl;
			}
		}
		break;
		case 3:
		{
			int i;
			for (i = 1; i <= 9; i++)
			{
				cout << "7 * " << i << "= " << 7 * i << endl;
			}
		}
		break;
		case 4:
		{
			//1.	�������� ���������� ���� �����������-���������� � ������ �� ���� ����� ������ � ������. ���������� ����� ������, ���������� ������ �����������
			int i;
			int ball;
			int j;
			int summ = 0;
			for (i = 1; i <= 2; i++)
			{
				summ = 0;
				for (ball = 1; ball <= 5; ball++)
				{
					j = 1 + rand() % 10;
					summ += j;
				}
				cout << "����� ����� " << i << " ��������� = " << summ << endl;
			}
		}
		break;
		case 5:
		{
			/*2.	�������� ������ �� ������ ������� ������� ���� �������. ���������� ������� ������ � ������ ������. ���������� �������� � ������ ������ ����������.*/
			int i, j;
			int ocenka, uchenikov;
			int summ = 0;
			for (i = 1; i <= 2; i++)
			{
				summ = 0;
				uchenikov = 5 + rand() % 25;
				for (j = 1; j <= uchenikov; j++)
				{
					ocenka = 1 + rand() % 5;
					summ += ocenka;

				}
				cout << "������� ������ " << i << "������ = " << summ / uchenikov << endl;
			}
		}
		break;
		case 6:
		{
			/*3.	� ������� 12 �������. �������� ���������� ������� (� ������� �������)  � ������� (� ��2) ������� ������. ���������� ������� ��������� ��������� �� ������� � �����.*/
			int i;
			int zhiteley;
			int S;
			int totalZhiteley = 0;
			int totalS = 0;
			for (i = 1; i <= 12; i++)
			{
				S = 1 + rand() % 10000;
				zhiteley = 1 + rand() % 1000000;
				totalS += S;
				totalZhiteley += zhiteley;
				cout << "������� " << i << " ������ = " << zhiteley << " " << "������� ������ = " << S << endl;
			}
			cout << "������� ��������� ��������� ������� ���������� " << totalZhiteley / totalS << "���//��^2" << endl;
		}
		break;
		case 7:
		{
			/*4.	� �������� ��������� �������� �����-�� ���������� �����������.
			���������� ���������� ������������ ������ ����� ������:
			������� ������� �������� �������� �� ����,
			������ ������� ������� ����������
			� � ����� �������� ������� ������ �������� � ������ �������� �� ���,
			� ��� �� ��������� ������� ������� �����������.*/
			int posetiteley;
			posetiteley = 1 + rand() % 100;
			int i;
			int vozrast = 0;
			int summVozrast = 0;
			int max = 0;
			int min = 100;
			for (i = 1; i <= posetiteley; i++)
			{
				vozrast = 14 + rand() % 80;
				summVozrast += vozrast;
				if (max < vozrast)
					max = vozrast;
				if (min > vozrast)
					min = vozrast;
				cout << "������� " << i << " ���������� " << vozrast << endl;
			}
			cout << "������� ������� ����������� " << summVozrast / posetiteley << endl;
			cout << "����� ������� ���������� " << max << " ����� ������� ���������� " << min << endl;
		}
		break;
		case 8:
		{
			/*5.	�� ������ ������� ����������� ���������� ������ � �������� (� ����� ������� 15).
			����� ���������� ������ ��� ��������, ��������� ������������ ������, ������� ������ ��������� � ������ ������, �� ������ � ��� �����,
			���� �� ���������� ����� � ��������. ������������� ��� ������, ����� ������������ ����� ���������� ������ ������, ��� ���� �� ������.*/
			int sklad = 15;
			int pogruzka;
			int zaezd = 0;
			do
			{
				cout << "������� ������ �������� � ������? ";
				cin >> pogruzka;
				if (pogruzka > sklad)
				{
					cout << " �� ������ ��������" << sklad << "������" << endl;

				}
				else
				{
					zaezd++;
					sklad -= pogruzka;
				}
			} while (sklad > 0);
			cout << "�������� " << zaezd << " �����" << endl;
		}
		}
		cout << "�� ������ ���������� (1) �� (2) ���";
		cin >> exit;
	} while (exit == 1);


}