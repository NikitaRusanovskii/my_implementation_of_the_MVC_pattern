#pragma once
#include "model.h"

/*

	������ ��������� Controller. �� ����� ����������������� � ������� (bookshelf).
	������� ����������� ������� � ������� �����, � ����� ����� ����� ���������� ����� notifySubscribers.s

*/


class InputHandler {
public:
	InputHandler() = default;
	void putTheBookDown(Bookshelf& bs, char book); // �������� ������ �� �����
	void takeALastBook(Bookshelf& bs); // ����� ������ ����� ��������� ������
};