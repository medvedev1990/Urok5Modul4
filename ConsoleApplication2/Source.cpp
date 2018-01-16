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
		cout << "введите номер задания" << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			//7.	Напечатать таблицу перевода расстояний в дюймах в сантиметры для значений 10, 11, ..., 22 дюйма(1 дюйм = 25, 4 мм).
			int i;
			for (i = 1; i <= 22; i++)
			{
				cout << i << "дюймов = " << i * 2.54 << "см" << endl;
			}
		}
		break;
		case 2:
		{
			//8.	Напечатать таблицу перевода 1, 2, ... 20 долларов США в тенге по текущему курсу(значение курса вводится с клавиатуры).
			int i;
			int kurs;
			cout << "введите курс доллара к тенге" << endl;
			cin >> kurs;
			for (i = 1; i <= 20; i++)
			{
				cout << i << " долларов = " << i*kurs << " тенге" << endl;
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
			//1.	Известны результаты двух спортсменов-пятиборцев в каждом из пяти видов спорта в баллах. Определить сумму баллов, полученных каждым спортсменом
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
				cout << "сумма былов " << i << " пятиборца = " << summ << endl;
			}
		}
		break;
		case 5:
		{
			/*2.	Известны оценки по физике каждого ученика двух классов. Определить среднюю оценку в каждом классе. Количество учащихся в каждом классе одинаковое.*/
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
				cout << "средняя оценка " << i << "класса = " << summ / uchenikov << endl;
			}
		}
		break;
		case 6:
		{
			/*3.	В области 12 районов. Известны количество жителей (в тысячах человек)  и площадь (в км2) каждого района. Определить среднюю плотность населения по области в целом.*/
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
				cout << "жителей " << i << " района = " << zhiteley << " " << "площадь района = " << S << endl;
			}
			cout << "средняя плотность населения области составляет " << totalZhiteley / totalS << "чел//км^2" << endl;
		}
		break;
		case 7:
		{
			/*4.	В спортзал ежедневно приходит какое-то количество посетителей.
			Необходимо предложить пользователю ввести такие данные:
			сколько человек посетило спортзал за день,
			ввести возраст каждого посетителя
			и в итоге показать возраст самого старшего и самого молодого из них,
			а так же посчитать средний возраст посетителей.*/
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
				cout << "возраст " << i << " посетителя " << vozrast << endl;
			}
			cout << "средний возраст посетителей " << summVozrast / posetiteley << endl;
			cout << "самый старший посетитель " << max << " самый младший посетитель " << min << endl;
		}
		break;
		case 8:
		{
			/*5.	На складе имеется определённое количество ящиков с яблоками (в нашем примере 15).
			Когда подъезжает машина для погрузки, попросить пользователя ввести, сколько ящиков загрузить в первую машину, во вторую и так далее,
			пока не закончатся ящики с яблоками. Предусмотреть тот случай, когда пользователь введёт количество ящиков больше, чем есть на складе.*/
			int sklad = 15;
			int pogruzka;
			int zaezd = 0;
			do
			{
				cout << "сколько ящиков загрузим в машину? ";
				cin >> pogruzka;
				if (pogruzka > sklad)
				{
					cout << " на складе доступно" << sklad << "ящиков" << endl;

				}
				else
				{
					zaezd++;
					sklad -= pogruzka;
				}
			} while (sklad > 0);
			cout << "загружно " << zaezd << " машин" << endl;
		}
		}
		cout << "Вы хотите продолжить (1) Да (2) Нет";
		cin >> exit;
	} while (exit == 1);


}