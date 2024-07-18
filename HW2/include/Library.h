#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>

#include "../include/Document.h"

class Library {
 public:
  explicit Library(const std::vector<Document> &documents);
  ~Library();

  std::vector<Document> documents;

  void showDocuments() const;
  void addDocument();
  void searchDocument();
  void deleteDocument();

  [[nodiscard]] Document *getDocuments() const;
};

#endif  // LIBRARY_H

//  auto it = std::find_if(documents.begin(), documents.end(), [id](const Document &doc) {
//	return doc.getId() == id;
//  });
//
//  if (it == documents.end()) {
//	std::cout << "Document not found" << std::endl;
//  } else {
//	documents.erase(it);
//	std::cout << "Document deleted" << std::endl;
//  }