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
};

#endif  // LIBRARY_H