// export module person_database;
#ifndef _DATABASE_H
#define _DATABASE_H

// import person;
// import <vector>;
// import <ostream>;
// import <string_view>;
#include "Person.h"
#include <vector>
#include <ostream>
#include <string_view>

class Database
{
public:
	// Adds the given person to the database.
	void add(Person person);

	// Removes all persons from the database.
	void clear();

	// Saves all persons in the database to the given file.
	void save(std::string_view filename) const;

	// Loads all persons from the given file and stores them in the database.
	void load(std::string_view filename);

	// Outputs all persons to the given stream.
	// void outputAll(std::ostream& output) const;

	const std::vector<Person>& getPersons() const;

private:
	std::vector<Person> m_persons;
};

std::ostream& operator << (std::ostream& os, const Database& db);

#endif