#include <iostream>
#include <vector>

#include "../include/Library.h"
#include "../include/utils.h"

Library::Library(const std::vector<Document> &documents) : documents(documents) {}
Library::~Library() = default;

/**
 * @brief 특정 document를 지우는 함수
 */
void Library::deleteDocument() {
  showDocuments();

  int id;
  std::cout << "Enter ID to delete: ";
  std::cin >> id;

  for (auto it = documents.begin(); it != documents.end(); ++it) {
	if (it->getId() == id) {
	  std::string title = it->getTitle();
	  documents.erase(it);
	  std::cout << "[" << title << "]" << " document deleted!" << std::endl;
	}
  }

  showDocuments();
}

/**
 * @brief document를 검색하는 함수
 */
void Library::searchDocument() {
  int choice;
  std::string query;
  std::cout << "Search by : 1) Title, 2) Author, 3) Publisher" << std::endl;
  std::cin >> choice;
  std::cin.ignore();

  switch (choice) {
	case 1: std::cout << "Enter Title to search: ";
	  std::getline(std::cin, query);
	  for (const auto &doc : documents) {
		if (containsQuery(doc.getTitle(), query)) printDocument(doc);
	  }
	  break;
	case 2: std::cout << "Enter Author to search: ";
	  std::getline(std::cin, query);
	  for (const auto &doc : documents) {
		if (containsQuery(doc.getAuthor(), query)) printDocument(doc);
	  }
	  break;
	case 3: std::cout << "Enter Publisher to search: ";
	  std::getline(std::cin, query);
	  for (const auto &doc : documents) {
		if (containsQuery(doc.getPublisher(), query)) printDocument(doc);
	  }
	  break;
	default: std::cout << "Invalid choice" << std::endl;
  }
}

/**
 * @brief document를 추가하는 함수
 */
void Library::addDocument() {
  std::string category, title, author, publisher;
  int published_year;

  int id = static_cast<int>(documents.size()) + 1;

  std::cout << "Enter Category: ";
  std::getline(std::cin, category);

  std::cout << "Enter Title: ";
  std::getline(std::cin, title);

  std::cout << "Enter Author: ";
  std::getline(std::cin, author);

  std::cout << "Enter Publisher: ";
  std::getline(std::cin, publisher);

  std::cout << "Enter Published Year: ";
  std::cin >> published_year;
  std::cin.ignore(); // 입력 버퍼에 남은 character 제거

  Document new_document(id, category, title, author, publisher, published_year);
  documents.push_back(new_document);

  printDocument(new_document);
}

/**
 * @brief document들을 보여주는 함수
 */
void Library::showDocuments() const {
  for (const auto &doc : documents) {
	std::cout << doc.getId() << ") "
			  << doc.getCategory() << " - "
			  << doc.getTitle() << " - "
			  << doc.getAuthor() << " - "
			  << doc.getPublisher() << " - "
			  << doc.getPublishedYear()
			  << std::endl;
  }
}