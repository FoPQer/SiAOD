/*#include <iostream>
using namespace std;
const int n = 3;
int* mas[n];
int sup = 0;
void add(int* a);
void del();
void chekFirst();
bool chekEmpty();
bool chekFull();
int main()
{
	setlocale(LC_ALL, "Russian");
	*mas = new int[sup];
	int* el = new int;
	string sup2;
	string sup3;
	bool ssup = true;
	while (true)
	{
		cout << "Введите, что хотите сделать:\n1. Добавить элемент\n2. Удалить элемент\n3. Посмотреть последний\n4. Проверить очередь\n5. Ничего не делать\n";
		cin >> sup2;
		if (sup2.length() > 1)
			sup2 = '6';
		switch (sup2[0])
		{
		case '1':
			cout << "Введите элемент который хотите добавить\n";
			cin >> *el;
			add(el);
			el = new int;
			break;
		case '2':
			if (chekEmpty())
			{
				cout << "Первый элемент в очереди: ";
				del();
				cout << endl;
			}
			else
				cout << "Очередь пуста" << endl;
			break;
		case '3':
			if (chekEmpty())
			{
				cout << "Первый элемент в очереди: ";
				chekFirst();
				cout << endl;
			}
			else
				cout << "Очередь пуста" << endl;
			break;
		case '4':
			ssup = true;
			while (ssup)
			{
				cout << "Хотите проверить на пустоту или полноту?(1. Полнота, 2. Пустота)" << endl;
				cin >> sup3;
				if (sup3.length() > 1)
					sup3 = '6';
				switch (sup3[0])
				{
				case '1':
					if (chekFull())
						cout << "Очередь полна" << endl;
					else
						cout << "Очередь не полна" << endl;
					ssup = false;
					break;
				case '2':
					if (chekEmpty())
						cout << "Очередь не пуста" << endl;
					else
						cout << "Очередь пуста" << endl;
					ssup = false;
					break;
				default:
					cout << "Не верное значение, попробуйте снова" << endl;
					break;
				}
			}
			break;
		case '5':
			cout << "Приятно было поработать с вами, до свидания!";
			return (0);
		default:
			cout << "Не верное значение, попробуйте снова" << endl;
			break;
		}
	}
}

void add(int* a)
{
	mas[sup] = a;
	sup++;
}

void del()
{
	cout << *mas[0];
	for (int i = 1; i != sup; i++)
	{
		mas[i - 1] = mas[i];
	}
	sup--;
	mas[sup] = new int;
}

void chekFirst()
{
	cout << *mas[0];
}

bool chekEmpty()
{
	if (sup == 0)
		return false;
	else
		return true;
}

bool chekFull()
{
	if (sup == n)
		return true;
	else
		return false;
}*/