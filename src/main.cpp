#include <iostream>
#include <string>
#include "TaskManager.h"
using namespace std;

void clearing();

int main() {
    int button;
    //for using getline
    string stringButton;
    TaskManager tableOfTasks;
    
    cout << "*****TASK MANAGER*****";
        
    cout << "\nWelcome to task manager a simple console application designed "
        <<"to help you organize and track your tasks."
        << "\nFor selecting one of the options enter the corresponding number." << endl;

    do {
        cout << "********OPTIONS*******\n"
            << "[1] Creating task\n"
            << "[2] Displaying your tasks\n"
            << "[3] Update task\n"
            << "[4] Mark task as completed\n"
            << "[5] Remove task\n"
            << "[6] Save task to file\n"
            << "[7] Remove file content\n"
            << "[8] Loading all tasks from file\n"
            << "[0] Exit\n"
            << "**********************" << endl;
        cout << "Enter number _ ";

        getline(cin, stringButton);
        button = stoi(stringButton);

        switch (button) {
        case 0: {
            clearing();
            cout << "Exiting program..." << endl;
            break;
        }
        case 1: {
            clearing();
            cout << "Enter your task name: ";
            string taskName;
            getline(cin, taskName);
            tableOfTasks.addingTask(taskName);
            cout << endl;
            break;
        }
        case 2: {
            clearing();
            if (tableOfTasks.checkForEmptinees()) {
                tableOfTasks.displayingTasks();
            }
            cout << endl;
            break;
        }
        case 3: {
            clearing();
            if (tableOfTasks.checkForEmptinees()) {
                int inputID;
                string stringInputID;
                cout << "Enter your task ID: ";
                getline(cin, stringInputID);
                inputID = stoi(stringInputID);
                tableOfTasks.updateTask(inputID);
            }
            cout << endl;
            break;
        }
        case 4: {
            clearing();
            if (tableOfTasks.checkForEmptinees()) {
                int inputID;
                string stringInputID;
                cout << "Enter your task ID: ";
                getline(cin, stringInputID);
                inputID = stoi(stringInputID);
                tableOfTasks.markAsCompleted(inputID);
            }
            cout << endl;
            break;
        }
        case 5: {
            clearing();
            if (tableOfTasks.checkForEmptinees()) {
                int inputID;
                string stringInputID;
                cout << "Enter your task ID: ";
                getline(cin, stringInputID);
                inputID = stoi(stringInputID);
                tableOfTasks.removeTask(inputID);
            }
            cout << endl;
            break;
        }
        case 6: {
            clearing();
            if (tableOfTasks.checkForEmptinees()) {
                int inputID;
                string stringInputID;
                cout << "Enter your task ID: ";
                getline(cin, stringInputID);
                inputID = stoi(stringInputID);
                tableOfTasks.saveTaskToFile(inputID);
            }
            cout << endl;
            break;
        }
        //need to fix
        case 7: {
            clearing();
            tableOfTasks.removeFileContent();
            cout << endl;
            break;
        }
        //need to fix
        case 8: {
            clearing();
            tableOfTasks.loadFromFile();
            cout << endl;
            break;
        }
        default:
            clearing();
            cout << "Invalid choice. Choose one of the following options!" << endl;
            cout << endl;
            break;
        }
    } while (0 != button);

    return 0;
}

void clearing() {
    system("cls");
}