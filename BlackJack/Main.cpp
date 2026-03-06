#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//시간 값을 넣어 초기화
	srand(static_cast<unsigned int>(std::time(0))); 

	int Computer[3];
	int Player[3];

	int SumComputer = 0;
	int SumPlayer = 0;

	for (int i = 0; i < 3; i++)
	{
		Computer[i] = rand() % 10 + 1; // c++ rand() 1+ 10 범위 정하는 법
		SumComputer += Computer[i];

		Player[i] = rand() % 10 + 1;
		SumPlayer += Player[i];
	}

	cout << "컴퓨터의 카드" << endl;
	cout << Computer[0] << " " << Computer[1] << " " << Computer[2] << endl;
	cout << "플레이어의 카드" << endl;
	cout << Player[0] << " " << Player[1] << " " << Player[2] << endl;

	cout << "컴퓨터의 카드 총합: " << SumComputer << endl;
	cout << "플레이어의 카드: " << SumPlayer << endl;

	if (SumComputer > 21)
	{
		cout << "플레이어의 승리입니다." << endl;
	}
	else
	{
		if (SumPlayer > 21)
		{
			cout << "컴퓨터의 승리입니다." << endl;
		}
		else if (SumComputer > SumPlayer)
		{
			cout << "컴퓨터의 승리입니다." << endl;
		}
		else
		{
			cout << "플레이어의 승리입니다." << endl;
		}
	}

	return 0;
}