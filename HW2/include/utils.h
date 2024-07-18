#ifndef UTILS_H
#define UTILS_H

#include "Document.h"

void printDocument(const Document &doc);
bool containsQuery(const std::string &field, const std::string &query);

#endif  // UTILS_H