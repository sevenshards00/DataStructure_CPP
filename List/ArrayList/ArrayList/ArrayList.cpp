/*
* 선형 자료구조 - C++로 다시 작성해보기
* 작성자: Sevenshards
* 작성 일자: 2023.11.23
* 자료구조 - 배열 기반 리스트
* 파일명: ArrayList.cpp
*/
#include <iostream>
#include "ArrayList.h"
using std::cout;

// C에서의 ListInit()
ArrayList::ArrayList() : cur_idx(-1), numOfData(0)
{
	this->arr = new Data[LIST_LEN];
}

// 동적 할당 방식을 사용할 것이므로 소멸자 선언
ArrayList::~ArrayList()
{
	delete[] this->arr;
}
// C에서의 LInsert()
void ArrayList::LInsert(Data data)
{
	if (this->cur_idx >= LIST_LEN - 1) // 리스트가 꽉 찬 상태라면
	{
		cout << "ArrayList Fulled\n";
		return;
	}
		
	this->cur_idx++;
	this->arr[this->cur_idx] = data;
	this->numOfData++;

}

// C에서의 LFirst()
bool ArrayList::LFirst(Data& refdata)
{
	if (this->cur_idx == -1) // 리스트가 비어있다면
		return false;
	// 그게 아닐 경우에는
	refdata = this->arr[0];
	this->cur_idx =0;

	return true;
}
// C에서의 LNext()
bool ArrayList::LNext(Data& refdata)
{
	if (this->cur_idx >= this->numOfData -1) // 리스트의 전체 데이터 개수를 넘어선 인덱스면
		return false;
	// 그게 아닐 경우에는
	(this->cur_idx++);
	refdata = this->arr[this->cur_idx];

	return true;
}
// C에서의 LRemove()
Data ArrayList::LRemove()
{
	int rData = this->arr[this->cur_idx];
	for (int i = this->cur_idx; i < this->numOfData; i++)
		this->arr[i] = this->arr[i + 1];
	(this->cur_idx)--;
	(this->numOfData)--;
	return rData;
}
// C에서의 LCount()
int ArrayList::LCount() const
{
	return this->numOfData;
}