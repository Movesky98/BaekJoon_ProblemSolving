/*
* ���� �̸� : ŷ, ��, ��, ���, ����Ʈ, ��
* ���� ���� :	ü���� �� 16���� �ǽ��� ����ϸ� ��� �ǽ��� ������ ������.
*				ŷ 1�� / �� 1�� / �� 2�� / ��� 2�� / ����Ʈ 2�� / �� 8���� �����Ǿ��ִ�.
*				�߰��� ��� �ǽ��� ������ �־����� ��, ��� ���ϰų� ���� 
*				�ùٸ� ��Ʈ�� �Ǵ��� ���ϴ� ���α׷� �ۼ�.
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