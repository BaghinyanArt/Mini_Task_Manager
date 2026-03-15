#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include "Task.h"
#include <vector>

class TaskManager {
public:
	bool checkForEmptinees();
	void addingTask(const std::string&);
	void displayingTasks()const;
	void updateTask(const int);
	void markAsCompleted(const int);
private:
	std::vector<Task> tableOfTasks;
};

#endif