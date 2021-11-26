// Переменной t присвоить значение true, если в массиве нет нулевых элементов и при
//этом положительные элементы чередуются с отрицательными и значение false в
//противном случае.


#include<iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	bool t;
	int n, fl;


	do
	{
		system("cls");
		fl = 1;
		
		
			cout << "Введите размер массива: ";
			cin >> n;
			cout << "Массив: ";
			int* array = new int[n]; //создание динамического массива
			int max = 10, min = -10;
			for (int i = 0; i < n; i++)
			{
				array[i] = rand() % (max - min + 1) + min; //заполнение массива рандомными числами
				cout << array[i] << " "; //вывод массива
			}
			cout << endl;
			for (int i = 0; i < n - 1; i++)
			{

				if (array[i] * array[i + 1] < 0) //проверка условия; нужно чтобы соседние члены были разных знаков => их произ-ие < 0. Автоматически проверяется отсутствие нулевых элементов
					t = true;
				else
				{
					t = false;
					break;
				}
			}
			cout << " t = " << t << endl;
			delete[] array;
		

		cout << "Повторить программу? 1 - да, 0 -нет: "; //повтор программы через цикл while
		cin >> fl;


	} while (fl == 1);

}

