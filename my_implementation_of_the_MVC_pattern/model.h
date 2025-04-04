#pragma once
#include <vector>
#include "view.h"

/*

	Сперва создадим интерфейс модели, затем реализуем нашу модель
	Для наглядности - книжная полка
	Притом реализуем взаимодействие между слоями Model и View с
	помощью паттерна Observer.
	Model - наблюдаемый
	View - наблюдатель

*/

class TextRenderer; // класс, представляющий слой View

class Model {
protected:
	// вектор наблюдателей
	std::vector<TextRenderer*> subscribers;
public:
	Model() = default;
	// метод для получения списка наблюдателей
	std::vector<TextRenderer*>& getSubscribers();
};

class Bookshelf : public Model {
private:
	// книги представлены символами
	std::vector<char> books;
public:
	Bookshelf() = default;
	// метод для работы с вектором книг
	std::vector<char>& getBooks();
	void notifySubscribers();
};