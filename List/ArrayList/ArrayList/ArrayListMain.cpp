/*
* ���� �ڷᱸ�� - C++�� �ٽ� �ۼ��غ���
* �ۼ���: Sevenshards
* �ۼ� ����: 2023.11.23
* �ڷᱸ�� - �迭 ��� ����Ʈ
* ���ϸ�: ArrayListMain.cpp
*/

#include <iostream>
#include "ArrayList.h"
using std::cout;

int main()
{
	ArrayList arraylist;
	Data data;

	// ����Ʈ�� 0���� 9���� ä������
	cout << "����Ʈ�� ���� ä���ֽ��ϴ�.\n";
	for (int i = 0; i < LIST_LEN; i++)
	{
		arraylist.LInsert(i);
		cout << "LInsert(" << i << ")\n";
	}

	// ������ ���� Ȯ��
	cout << "���� ����Ʈ�� ������ ���� :" << arraylist.LCount() << "\n\n";

	// ����Ʈ ��ü ��ȸ
	cout << "����Ʈ�� ���� ��ȸ�մϴ�.\n";
	if (arraylist.LFirst(data))
	{
		cout << data << '\n';

		while(arraylist.LNext(data))
			cout << data << '\n';
	}

	cout << "\n\n";

	// ����Ʈ���� ¦���� ����
	cout << "����Ʈ ���� ¦�� ���� �����մϴ�.\n";
	if (arraylist.LFirst(data))
	{
		if (data % 2 == 0)
			cout << arraylist.LRemove() << "�� �����մϴ�.\n";

		while (arraylist.LNext(data))
			if (data % 2 == 0)
				cout << arraylist.LRemove() << "�� �����մϴ�.\n";
	}

	// ����Ʈ ��ü ��ȸ
	cout << "����Ʈ�� ���� ��ȸ�մϴ�.\n";
	if (arraylist.LFirst(data))
	{
		cout << data << '\n';

		while (arraylist.LNext(data))
			cout << data << '\n';
	}

	// ������ ���� Ȯ��
	cout << "���� ����Ʈ�� ������ ���� :" << arraylist.LCount() << "\n\n";

	return 0;
}