/*
* 선형 자료구조 - C++로 다시 작성해보기
* 작성자: Sevenshards
* 작성 일자: 2023.11.23
* 자료구조 - 배열 기반 리스트
* 파일명: ArrayListMain.cpp
*/

#include <iostream>
#include "ArrayList.h"
using std::cout;

int main()
{
	ArrayList arraylist;
	Data data;

	// 리스트에 0부터 9까지 채워넣음
	cout << "리스트에 값을 채워넣습니다.\n";
	for (int i = 0; i < LIST_LEN; i++)
	{
		arraylist.LInsert(i);
		cout << "LInsert(" << i << ")\n";
	}

	// 데이터 개수 확인
	cout << "현재 리스트의 데이터 갯수 :" << arraylist.LCount() << "\n\n";

	// 리스트 전체 조회
	cout << "리스트의 값을 조회합니다.\n";
	if (arraylist.LFirst(data))
	{
		cout << data << '\n';

		while(arraylist.LNext(data))
			cout << data << '\n';
	}

	cout << "\n\n";

	// 리스트에서 짝수만 삭제
	cout << "리스트 내의 짝수 값을 삭제합니다.\n";
	if (arraylist.LFirst(data))
	{
		if (data % 2 == 0)
			cout << arraylist.LRemove() << "를 삭제합니다.\n";

		while (arraylist.LNext(data))
			if (data % 2 == 0)
				cout << arraylist.LRemove() << "를 삭제합니다.\n";
	}

	// 리스트 전체 조회
	cout << "리스트의 값을 조회합니다.\n";
	if (arraylist.LFirst(data))
	{
		cout << data << '\n';

		while (arraylist.LNext(data))
			cout << data << '\n';
	}

	// 데이터 개수 확인
	cout << "현재 리스트의 데이터 갯수 :" << arraylist.LCount() << "\n\n";

	return 0;
}