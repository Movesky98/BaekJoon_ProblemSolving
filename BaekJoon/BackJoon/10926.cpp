/*
* 문제 이름 : ??!
* 문제 내용 : 이미 사이트에 존재하는 아이디를 입력했을 때, ??! (놀람)을 표현하는 프로그램 작성
*/

#include <iostream>
using namespace std;

#define MAX_ID_SPACE 51

int main()
{
	char ID[MAX_ID_SPACE];

	cin >> ID;

	cout << ID << "??!" << endl;

	return 0;
}