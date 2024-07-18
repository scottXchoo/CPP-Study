#include <iostream>

#include "../include/Library.h"

Library::Library(Document* documents, int size) : documents(documents), size() {}
Library::~Library() = default;

void Library::showDocuments() {
	for (int i = 0; i < size; i++) {
		std::cout << "ID: " << documents[i].getId() << std::endl;
		std::cout << "Category: " << documents[i].getCategory() << std::endl;
		std::cout << "Title: " << documents[i].getTitle() << std::endl;
		std::cout << "Author: " << documents[i].getAuthor() << std::endl;
		std::cout << "Publisher: " << documents[i].getPublisher() << std::endl;
		std::cout << "Published Year: " << documents[i].getPublishedYear() << std::endl;
		std::cout << std::endl;
	}
}