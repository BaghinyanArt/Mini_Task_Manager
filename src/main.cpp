#include <iostream>
#include "TaskManager.h"

using namespace std;


int main() {
    int button;

    do {
        system("cls");
        cout << "Welcome to task menager\n";

        cin >> button;
        switch (button) {
        case 4:
            cout << "we in case 4\n";
            int something;
            cout << "enter some integer: ";
            cin >> something;
            break;
        default:
            break;
        }
    } while (0 != button);



}
