#include <iostream>

#include "include/Library.h"
#include "config/config.h"


int main() {
  	Library library(documents, NUM_DOCUMENTS);

	library.showDocuments();

  return 0;
}