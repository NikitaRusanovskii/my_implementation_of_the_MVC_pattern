#pragma once
#include "model.h"


/*

	��������� ����� ���� View, ������� ����� ���������� ��������� ����� ������ �����,
	����� ��� ����� ����������� �� bookshelf.

*/

class Model;
class Bookshelf;

class TextRenderer {
public:
	TextRenderer() = default;
	void subscribe(Bookshelf& bs); // ������������� �� �����������
	void update(std::vector<char> books); // ��������� ������� ������ ���, ����� �������� �����������
};