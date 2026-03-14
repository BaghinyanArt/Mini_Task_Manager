#include "TaskManager.h"
#include <iostream>
using namespace std;

void TaskManager::addingTask(const std::string& name) {

	Task taskForAdding(name);
	tableOfTasks.push_back(taskForAdding);
	cout << "Your task was created successfully!" << endl;
}