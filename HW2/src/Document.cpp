#include "../include/Document.h"

Document::Document(
	int id, std::string category,
	std::string title,
	std::string author,
	std::string publisher,
	int published_year
	) : id(id), category(std::move(category)), title(std::move(title)), author(std::move(author)), publisher(std::move(publisher)), published_year(published_year) {}
Document::~Document() = default;

/**
 * @brief document의 id를 반환하는 함수
 * @return document의 id
 */
int Document::getId() const {
	return id;
}

/**
 * @brief document의 category를 반환하는 함수
 * @return document의 category
 */
std::string Document::getCategory() const {
	return category;
}

/**
 * @brief document의 title을 반환하는 함수
 * @return document의 title
 */
std::string Document::getTitle() const {
	return title;
}

/**
 * @brief document의 author를 반환하는 함수
 * @return document의 author
 */
std::string Document::getAuthor() const {
	return author;
}

/**
 * @brief document의 publisher를 반환하는 함수
 * @return document의 publisher
 */
std::string Document::getPublisher() const {
	return publisher;
}

/**
 * @brief document의 published_year를 반환하는 함수
 * @return document의 published_year
 */
int Document::getPublishedYear() const {
	return published_year;
}

