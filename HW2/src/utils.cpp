#include <iostream>
#include <algorithm>

#include "utils.h"

/**
 * @brief Replace all the substring in the string
 */
std::string replaceAll(std::string str, const std::string &from, const std::string &to) {
  size_t start_pos = 0;
  while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
	str.replace(start_pos, from.length(), to);
	start_pos += to.length(); // 다음 검색 위치로 이동
  }
  return str;
}

/**
 * @brief Print the document information
 * @param doc document to print
 */
void printDocument(const Document &doc) {
  std::cout << "ID: " << doc.getId() << std::endl;
  std::cout << "Category: " << doc.getCategory() << std::endl;
  std::cout << "Title: " << doc.getTitle() << std::endl;
  std::cout << "Author: " << doc.getAuthor() << std::endl;
  std::cout << "Publisher: " << doc.getPublisher() << std::endl;
  std::cout << "Published Year: " << doc.getPublishedYear() << std::endl;
  std::cout << std::endl;
}

/**
 * @brief Convert the string to lower case
 * @param str string to convert
 * @return lower case string
 */
std::string toLower(const std::string &str) {
  std::string lowerStr = str;
  std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
  return lowerStr;
}

/**
 * @brief Check if the field contains the query
 * @param field	field to search
 * @param query	query to search
 * @return true if the field contains the query, false otherwise
 */
bool containsQuery(const std::string &field, const std::string &query) {
  std::string lowerField = toLower(field);
  std::string lowerQuery = toLower(query);
  return lowerField.find(lowerQuery) != std::string::npos;
}