#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

#include "../include/Document.h"

class Library {
 private:
  Document* documents;
  int size;

 public:
  Library(Document* documents, int size);
  ~Library();

  void showDocuments();
  void addDocument(Document document);
  void searchDocument(int number);
  void deleteDocument(int number);

  [[nodiscard]] Document* getDocuments() const;
};

#endif  // LIBRARY_H