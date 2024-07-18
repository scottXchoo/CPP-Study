#include <iostream>

#include "include/Library.h"

void showMenu() {
  std::cout << "<Document Management Program>" << std::endl;
  std::cout << "1. Show documents" << std::endl;
  std::cout << "2. Add document" << std::endl;
  std::cout << "3. Search document" << std::endl;
  std::cout << "4. Delete document" << std::endl;
  std::cout << "5. Exit" << std::endl;
}

void mainController() {
  std::vector<Document> init_documents = {
	  Document(1, "Book", "Java Manse", "Chu", "Apple", 2013),
	  Document(2, "E-Book", "TypeScript Manse", "Kim", "Banana", 2018),
	  Document(3, "Thesis", "Rust Manse", "Jung", "Macdonald", 2020)
  };

  Library library(init_documents);
  int choice;
  bool running = true;

  while (running) {
	std::cout << "------------------------" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "------------------------" << std::endl;
	showMenu();

	std::cout << "-> Enter your choice: " << std::endl;
	std::cin >> choice;
	std::cin.ignore();

	switch (choice) {
	  case 1: library.showDocuments();
		break;
	  case 2: library.addDocument();
		break;
	  case 3: library.searchDocument();
		break;
	  case 4: library.deleteDocument();
		break;
	  case 5: std::cout << "<Exit the program>" << std::endl;
		running = false;
		break;
	  default: std::cout << "Invalid choice" << std::endl;
		break;
	}
  }
}

int main() {
  mainController();
  return 0;
}