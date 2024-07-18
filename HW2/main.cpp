#include <iostream>

#include "include/Library.h"
#include "config/config.h"

void showMenu() {
  std::cout << "<Document Management Program>" << std::endl;
  std::cout << "1. Show documents" << std::endl;
  std::cout << "2. Add document" << std::endl;
  std::cout << "3. Search document" << std::endl;
  std::cout << "4. Delete document" << std::endl;
  std::cout << "5. Exit" << std::endl;
}

int main() {
  Library library(documents);
  int choice;

  while (true) {
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
		return 0;
	  default: std::cout << "Invalid choice" << std::endl;
		break;
	}
  }
}