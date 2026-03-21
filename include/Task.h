#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostream>
//#include "Date.h"

enum class Status {
	NotStarted = 1,
	Completed,
};

class Task {
	friend std::ostream& operator<<(std::ostream&, const Task&);
public:
	explicit Task(const std::string& n) : name(n) {
		id = nextID++;
	}
	int getID() const { return id; }
	const std::string& getName() const { return name; }
	//const Date& getDate() const { return dueDate; }
	Status getStatus() const { return currentStatus; }

	void setName(const std::string& n) { name = n; }
	//void setDate(const Date& dd) { dueDate = dd; }
	void setStatus(Status cs) { currentStatus = cs; }
private :
	int id;
	static int nextID;
	std::string name;
	//Date dueDate;
	Status currentStatus = Status::NotStarted;
};

#endif