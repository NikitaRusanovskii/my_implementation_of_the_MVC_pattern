#include "controller.h"
#include <conio.h>

/*

	Суть паттерна MVC:
	MVC (Model-View-Controller) — это архитектурный паттерн,
	который разделяет логику приложения на три компонента:

	Model (Модель) – отвечает за данные и бизнес-логику.

	View (Представление) – отвечает за отображение данных пользователю.

	Controller (Контроллер) – принимает пользовательский ввод и обновляет модель или представление.

   +------------+          +------------+          +------------+
   |   View     | <------> | Controller | <------> |   Model    |
   +------------+          +------------+          +------------+
		↑                                                    ↓
		|                                                    |
		|                                                    |
		+----------------------------------------------------+

*/

int main() {

	Bookshelf bs;
	TextRenderer tr;
	InputHandler ih;

	tr.subscribe(bs);

	while (1) {
		char key = _getch();
		if (key == '`') ih.takeALastBook(bs);
		else ih.putTheBookDown(bs, key);
	}

	return 0;
}