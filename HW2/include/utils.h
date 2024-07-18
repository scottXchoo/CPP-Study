#ifndef UTILS_H
#define UTILS_H

#include "Document.h"

void printDocument(const Document &doc);
bool containsQuery(const std::string &field, const std::string &query);
std::string toLower(const std::string &str);
std::string replaceAll(std::string str, const std::string &from, const std::string &to);

#endif  // UTILS_H