/**
 * Author: Vincent X
 * Date:   2021-12-21
 * Demonstrate the difference between return and exit.
 *  -Return calls destructors before quitting, exit() just simply ends the program.
 *  -return goes back to the calling function, exit() ends the program.
 */

#include <iostream>
#include <string>

using namespace std;

class Leave {
public:
    Leave() {
        cout << "Object has been created" << endl;
    }
    ~Leave() {
        cout << "Object has been destroyed" << endl;
    }
};

int main() {
    Leave a;

    string choice;

    do {
        cout << "exit or return? ";
        cin >> choice;
    } while (choice.compare("exit") && choice.compare("return"));

    if (choice.compare("exit") == 0) {
        cout << "You chose " << choice << endl;
        exit(EXIT_FAILURE);   // EXIT_FAILURE == 1
    } else {
        cout << "You chose " << choice << endl;
        return 5;    // just a random number, check it using 'echo $?' command in the shell
    }

}