#ifndef CONFIG_H
#define CONFIG_H

#include "../include/Document.h"

const int NUM_DOCUMENTS = 3;

Document documents[NUM_DOCUMENTS] = {
	Document(1, "Book", "Java Manse", "Chu", "Apple", 2013),
	Document(2, "E-Book", "TypeScript Manse", "Kim", "Banana", 2018),
	Document(3, "Thesis", "Rust Manse", "Jung", "Macdonald", 2020)
};

#endif  // CONFIG_H
