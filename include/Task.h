#ifndef TASK_H
#define TASK_H

#include <string>
#include "Date.h"

enum class Status {
	NotStarted,
	InProcess,
	Completed,
};

struct taskID {
	int id;
	
	taskID() {
		static int nextID = 1;
		id = nextID++;
	}
};

class Task {
public:
	taskID getID() const { return id; }
	const std::string& getName() const { return name; }
	const Date& getDate() const { return dueDate; }
	Status getStatus() const { return currentStatus; }

	Task(const std::string& n, const std::string& d, const Date& dd, Status cs) :
		name(n), dueDate(dd), currentStatus(cs){
	}
	void setName(const std::string& n) { name = n; }
	void setDate(const Date& dd) { dueDate = dd; }
	void setStatus(Status cs) { currentStatus = cs; }

private :
	taskID id;
	std::string name;
	Date dueDate;
	Status currentStatus;
};

#endif