/*
* ���� �ڷᱸ�� - C++�� �ٽ� �ۼ��غ���
* �ۼ���: Sevenshards
* �ۼ� ����: 2023.11.23
* �ڷᱸ�� - �迭 ��� ����Ʈ
* ���ϸ�: ArrayList.cpp
*/
#include <iostream>
#include "ArrayList.h"
using std::cout;

// C������ ListInit()
ArrayList::ArrayList() : cur_idx(-1), numOfData(0)
{
	this->arr = new Data[LIST_LEN];
}

// ���� �Ҵ� ����� ����� ���̹Ƿ� �Ҹ��� ����
ArrayList::~ArrayList()
{
	delete[] this->arr;
}
// C������ LInsert()
void ArrayList::LInsert(Data data)
{
	if (this->cur_idx >= LIST_LEN - 1) // ����Ʈ�� �� �� ���¶��
	{
		cout << "ArrayList Fulled\n";
		return;
	}
		
	this->cur_idx++;
	this->arr[this->cur_idx] = data;
	this->numOfData++;

}

// C������ LFirst()
bool ArrayList::LFirst(Data& refdata)
{
	if (this->cur_idx == -1) // ����Ʈ�� ����ִٸ�
		return false;
	// �װ� �ƴ� ��쿡��
	refdata = this->arr[0];
	this->cur_idx =0;

	return true;
}
// C������ LNext()
bool ArrayList::LNext(Data& refdata)
{
	if (this->cur_idx >= this->numOfData -1) // ����Ʈ�� ��ü ������ ������ �Ѿ �ε�����
		return false;
	// �װ� �ƴ� ��쿡��
	(this->cur_idx++);
	refdata = this->arr[this->cur_idx];

	return true;
}
// C������ LRemove()
Data ArrayList::LRemove()
{
	int rData = this->arr[this->cur_idx];
	for (int i = this->cur_idx; i < this->numOfData; i++)
		this->arr[i] = this->arr[i + 1];
	(this->cur_idx)--;
	(this->numOfData)--;
	return rData;
}
// C������ LCount()
int ArrayList::LCount() const
{
	return this->numOfData;
}