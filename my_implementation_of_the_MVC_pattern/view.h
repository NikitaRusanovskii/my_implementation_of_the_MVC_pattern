#pragma once
#include "model.h"


/*

	–еализуем класс сло€ View, который будет отображать изменени€ полки только тогда,
	когда ему придЄт уведомление от bookshelf.

*/

class Model;
class Bookshelf;

class TextRenderer {
public:
	TextRenderer() = default;
	void subscribe(Bookshelf& bs); // подписываемс€ на уведомлени€
	void update(std::vector<char> books); // обновл€ем консоль каждый раз, когда приходит уведомление
};