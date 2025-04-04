#pragma once
#include "model.h"

/*

	Теперь реализуем Controller. Он будет взаимодействовать с моделью (bookshelf).
	Добавим возможность ставить и убирать книги, а также здесь будет вызываться метод notifySubscribers.s

*/


class InputHandler {
public:
	InputHandler() = default;
	void putTheBookDown(Bookshelf& bs, char book); // поставим книжку на полку
	void takeALastBook(Bookshelf& bs); // будем всегда брать последнюю книжку
};