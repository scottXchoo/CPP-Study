#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

class Document {
 private:
  int id;
  std::string category;
  std::string title;
  std::string author;
  std::string publisher;
  int published_year;

 public:
  Document(int id, std::string category, std::string title, std::string author, std::string publisher, int published_year);
  ~Document();

  [[nodiscard]] int getId() const;
  [[nodiscard]] std::string getCategory() const;
  [[nodiscard]] std::string getTitle() const;
  [[nodiscard]] std::string getAuthor() const;
  [[nodiscard]] std::string getPublisher() const;
  [[nodiscard]] int getPublishedYear() const;
};

#endif  // DOCUMENT_H
