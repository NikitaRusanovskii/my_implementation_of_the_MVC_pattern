#include <iostream>
#include "view.h"

using namespace std;

void TextRenderer::subscribe(Bookshelf& bs) {
	bs.getSubscribers().push_back(this);
}

void TextRenderer::update(vector<char> books) {
	system("cls");
	for (int i = 0; i < books.size(); i++) {
		cout << "Book " << i << " : " << books[i] << endl;
	}
}