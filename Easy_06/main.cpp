#include <iostream>

using namespace std;
//---------------------������� � ���������---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------���� �����-------------------------------------

	int a;

	cout << "1. �����������" << endl;
	cout << "2. �������" << endl;
	cout << "3. �����" << endl;
	cout << "4. �������" << endl;
	cout << "5. �������" << endl;
	cout << "6. �������" << endl;
	cout << "7. �����������" << endl;

	cout << endl << "������� ����� ��� ������: ";
	cin >> a;

	switch (a)
	{
	case 1:
	{
		cout << "�����������" << endl;
		break;
	}
	case 2:
	{
		cout << "�������" << endl;
		break;
	}
	case 3:
	{
		cout << "�����" << endl;
		break;
	}
	case 4:
	{
		cout << "�������" << endl;
		break;
	}
	case 5:
	{
		cout << "�������" << endl;
		break;
	}
	case 6:
	{
		cout << "�������" << endl;
		break;
	}
	case 7:
	{
		cout << "�����������" << endl;
		break;
	}

		
	}

	system("pause");

	return 0;
}
