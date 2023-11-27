/*
* ���� �ڷᱸ�� - C++ ������� �ٽ� �ۼ��غ���
* �ۼ���: Sevenshards
* �ۼ� ����: 2023.11.23 
* �ڷᱸ�� - �迭 ��� ����Ʈ
* ���ϸ�: ArrayList.h
*/ 
#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define LIST_LEN 10

typedef int Data; // ���ǻ� int�� data�� Data��. �ٸ� �ڷ����� �־ ��� ����.

class ArrayList
{
private:
	Data* arr; // �����Ͱ� ��� �迭
	int cur_idx; // ���� ����Ű�� �ε���
	int numOfData; // �迭�� ��� �������� ����
public:
	// C�� �������� ListInit(), LInsert(), LFirst(), LNext(), LRemove(), LCount()�� �ʿ�.
	// C������ ListInit()
	ArrayList();
	// ���� �Ҵ� ����� ����� ���̹Ƿ� �Ҹ��� ����
	~ArrayList();
	// C������ LInsert()
	void LInsert(Data data);
	// C������ LFirst()
	bool LFirst(Data& refdata);
	// C������ LNext()
	bool LNext(Data& refdata);
	// C������ LRemove()
	Data LRemove();
	// C������ LCount()
	int LCount() const;
};

#endif