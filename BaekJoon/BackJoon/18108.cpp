/*
* ���� �̸� : 1998����� ���� �±������� 2541���?
* ���� ���� : �ұ� ������ �־��� �� �̸� ���� ������ �ٲ��ִ� ���α׷� �ۼ�
*/

#include <iostream>
using namespace std;

// �Է� ���� ����
#define MINIMUM 1000
#define MAXIMUM 3000

int main()
{
	int year;

	cin >> year;

	if (year < 1000 || year > 3000)
	{
		return -1;
	}

	cout << year - 543 << endl;

	return 0;
}