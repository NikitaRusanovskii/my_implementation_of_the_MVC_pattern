#include "model.h"

using namespace std;


vector<TextRenderer*>& Model::getSubscribers() {
	return subscribers;
}

std::vector<char>& Bookshelf::getBooks() {
	return books;
}

void Bookshelf::notifySubscribers() {
	for (int i = 0; i < subscribers.size(); i++) {
		subscribers[i]->update(books);
	}
}