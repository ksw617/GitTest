#include <stdio.h>
#include <Windows.h> 

int main()
{
	COORD pos;
	pos.X = 10;
	pos.Y = 10;

	while (true)
	{
		system("cls");

		//GetAsyncKeyState
		//Get : 가져오다
		//Async : 비동기 == 동기화 되지 않는
		//Key : 키 //ex. 키보드, 마우스 클릭
		//State : 상태
		//VK_LEFT 
		//VK : Virtual Key 가상 키
		//LEFT : 왼쪽
		if (GetAsyncKeyState(VK_LEFT)) // 키보드 왼쪽을 눌렀어?
		{
			pos.X--;  // 10 -> 9,8,7,6
		}

		if (GetAsyncKeyState(VK_RIGHT))	// 키보드 오른쪽 키를 눌렀다면? 
		{
			pos.X++;  // 10 -> 11,12,13,14
		}
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		printf("Hello world");	 


		Sleep(50);
	}
	return 0;
}