#include "controller.h"

	
void InputHandler::putTheBookDown(Bookshelf& bs, char book) {
	bs.getBooks().push_back(book);
	bs.notifySubscribers();
}

void InputHandler::takeALastBook(Bookshelf& bs) {
	if (bs.getBooks().size() > 0) {
		bs.getBooks().erase(bs.getBooks().begin() + bs.getBooks().size() - 1);
		bs.notifySubscribers();
	}
}