/*
* 문제 이름 : 1998년생인 내가 태국에서는 2541년생?
* 문제 내용 : 불기 연도가 주어질 때 이를 서기 연도로 바꿔주는 프로그램 작성
*/

#include <iostream>
using namespace std;

// 입력 연도 범위
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