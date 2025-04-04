#pragma once
#include <vector>
#include "view.h"

/*

	������ �������� ��������� ������, ����� ��������� ���� ������
	��� ����������� - ������� �����
	������ ��������� �������������� ����� ������ Model � View �
	������� �������� Observer.
	Model - �����������
	View - �����������

*/

class TextRenderer; // �����, �������������� ���� View

class Model {
protected:
	// ������ ������������
	std::vector<TextRenderer*> subscribers;
public:
	Model() = default;
	// ����� ��� ��������� ������ ������������
	std::vector<TextRenderer*>& getSubscribers();
};

class Bookshelf : public Model {
private:
	// ����� ������������ ���������
	std::vector<char> books;
public:
	Bookshelf() = default;
	// ����� ��� ������ � �������� ����
	std::vector<char>& getBooks();
	void notifySubscribers();
};