#include <iostream>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------САМА ПРОГА-------------------------------------

	int a;

	cout << "1. Понедельник" << endl;
	cout << "2. Вторник" << endl;
	cout << "3. Среда" << endl;
	cout << "4. Четверг" << endl;
	cout << "5. Пятница" << endl;
	cout << "6. Суббота" << endl;
	cout << "7. Воскресенье" << endl;

	cout << endl << "Введите номер дня недели: ";
	cin >> a;

	switch (a)
	{
	case 1:
	{
		cout << "Понедельник" << endl;
		break;
	}
	case 2:
	{
		cout << "Вторник" << endl;
		break;
	}
	case 3:
	{
		cout << "Среда" << endl;
		break;
	}
	case 4:
	{
		cout << "Четверг" << endl;
		break;
	}
	case 5:
	{
		cout << "Пятница" << endl;
		break;
	}
	case 6:
	{
		cout << "Суббота" << endl;
		break;
	}
	case 7:
	{
		cout << "Воскресенье" << endl;
		break;
	}

		
	}

	system("pause");

	return 0;
}
