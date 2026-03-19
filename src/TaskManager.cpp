#include "TaskManager.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

bool TaskManager::checkForEmptinees() {
	if (tableOfTasks.empty()) {
		cout << "Your task list is empty!\nChoose [1]st option to add your first task." << endl;
		return false;
	}
	return true;
}

auto TaskManager::findTaskViaID(const int choosenID) {
	auto it = find_if(tableOfTasks.begin(), tableOfTasks.end(), [choosenID](const Task& item) {return item.getID() == choosenID; });
	return it;
}


void TaskManager::addingTask(const std::string& name) {

	Task taskForAdding(name);
	tableOfTasks.push_back(taskForAdding);
	cout << "Your task was created successfully!" << endl;
}

void TaskManager::displayingTasks() const {
		cout << "Here are your tasks" << "\n-------------------\n";
		copy(tableOfTasks.begin(), tableOfTasks.end(), ostream_iterator<Task>(cout, "\n"));
}

void TaskManager::updateTask(const int choosenID) {
	auto it = findTaskViaID(choosenID);
	if (it != tableOfTasks.end()) {

			if (it->getStatus() == Status::Completed) {
				cout << "You can not update completed task!" << endl;
				return;
			}

			cout << "For now you can just update yout tasks name" << endl;
			cout << "Current Name: " << it->getName() << endl;
			string newName;
			cout << "Enter new name: ";
			getline(cin, newName);
			it->setName(newName);
			cout << "Your task was updated successfully!" << endl;
		}
		else {
			cout << "There is not any task with your entered ID. For information about task choose [2]nd option." << endl;
		}
}

void TaskManager::markAsCompleted(const int choosenID) {
	auto it = findTaskViaID(choosenID);
		if (it != tableOfTasks.end()) {
			it->setStatus(Status::Completed);
			cout << "Your task was marked as completed!" << endl;
		}
		else {
			cout << "There is not any task with your entered ID. For information about task choose [2]nd option." << endl;
		}
}