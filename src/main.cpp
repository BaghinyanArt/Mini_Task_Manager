#include <iostream>
#include <string>
#include "TaskManager.h"

using namespace std;


int main() {
    int button;
    //for using getline
    string stringButton;
    TaskManager tableOfTasks;

    cout << "*****TASK MANAGER*****";
        
    cout << "\nWelcome to task manager a simple console application designed "
        <<"to help you organize and track your tasks."
        << "\nFor selecting one of the options enter the corresponding number." << endl;

    cout << "**********************\n" << "[1] Creating task\n"
        << "[2] Displaying your tasks\n"
        << "[3] Update task\n"
        << "[4] Mark task as completed\n"
        << "[0] Exit\n"
        << "**********************" << endl;

    do {
        getline(cin, stringButton);
        button = stoi(stringButton);

        switch (button) {
        case 0: {
            cout << "Exiting program..." << endl;
            break;
        }
        case 1: {
            cout << "Enter your task name: ";
            string taskName;
            getline(cin, taskName);
            tableOfTasks.addingTask(taskName);
            break;
        }
        case 2: {
            if (tableOfTasks.checkForEmptinees()) {
                tableOfTasks.displayingTasks();
            }
            break;
        }
        case 3: {
            if (tableOfTasks.checkForEmptinees()) {
                int inputID;
                string stringInputID;
                cout << "Enter your task ID: ";
                getline(cin, stringInputID);
                inputID = stoi(stringInputID);
                tableOfTasks.updateTask(inputID);
            }
            break;
        }
        case 4: {
            if (tableOfTasks.checkForEmptinees()) {
                int inputID;
                string stringInputID;
                cout << "Enter your task ID: ";
                getline(cin, stringInputID);
                inputID = stoi(stringInputID);
                tableOfTasks.markAsCompleted(inputID);
            }
            break;
        }
        default:
            cout << "Invalid choice. Choose one of the options above!" << endl;
            break;
        }
    } while (0 != button);

    return 0;
}
