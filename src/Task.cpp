#include "Task.h"
#include <ostream>
using namespace std;

int Task::nextID = 1000;

ostream& operator<<(ostream& output, const Task& task) {
	static int taskCounter = 1;
	output << "Task - " << taskCounter++ << "\n***********\nName: "
		<< task.name << "\nID: " << task.id << "\nStatus: "
		<< ((task.getStatus() == Status::NotStarted) ? "not started" : "completed")<<"\n-------------------";
	return output;
}