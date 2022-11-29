/*
* 문제 이름 : 킹, 퀸, 룩, 비숍, 나이트, 폰
* 문제 내용 :	체스는 총 16개의 피스를 사용하며 흰색 피스는 부족한 상태임.
*				킹 1개 / 퀸 1개 / 룩 2개 / 비숍 2개 / 나이트 2개 / 폰 8개로 구성되어있다.
*				발견한 흰색 피스의 개수가 주어졌을 때, 몇개를 더하거나 빼야 
*				올바른 세트가 되는지 구하는 프로그램 작성.
*/

#include <iostream>
using namespace std;

#define ChessNum 6

int main()
{
	int ChessPiece[ChessNum] = { 0 };

	for (int i = 0; i < ChessNum; i++)
	{
		cin >> ChessPiece[i];
	}



	return 0;
}