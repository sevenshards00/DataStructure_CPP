/*
* 선형 자료구조 - C++ 기반으로 다시 작성해보기
* 작성자: Sevenshards
* 작성 일자: 2023.11.23 
* 자료구조 - 배열 기반 리스트
* 파일명: ArrayList.h
*/ 
#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define LIST_LEN 10

typedef int Data; // 편의상 int형 data를 Data로. 다른 자료형을 넣어도 상관 없다.

class ArrayList
{
private:
	Data* arr; // 데이터가 담길 배열
	int cur_idx; // 현재 가리키는 인덱스
	int numOfData; // 배열에 담긴 데이터의 갯수
public:
	// C를 기준으로 ListInit(), LInsert(), LFirst(), LNext(), LRemove(), LCount()가 필요.
	// C에서의 ListInit()
	ArrayList();
	// 동적 할당 방식을 사용할 것이므로 소멸자 선언
	~ArrayList();
	// C에서의 LInsert()
	void LInsert(Data data);
	// C에서의 LFirst()
	bool LFirst(Data& refdata);
	// C에서의 LNext()
	bool LNext(Data& refdata);
	// C에서의 LRemove()
	Data LRemove();
	// C에서의 LCount()
	int LCount() const;
};

#endif