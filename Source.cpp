#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;

int main() {
    srand(time(NULL)); // Initialize random number generator

    int computer;

    cout << "Cockroach-Foot-Nuke. Choose 1-4." << endl;
    cout << "1) Cockroach 2) Foot 3) Nuke 4) Exit" << endl;

    while (true) {
        int player;
        string input;

        getline(cin, input);

        if (!(stringstream(input) >> player)) {
            cout << "Invalid input. Choose again." << endl;
            continue;
        }

        if (player == 4) {
            break;
        }
        else if (player < 1 || player > 3) {
            cout << "Invalid input. Choose again." << endl;
            continue;
        }

        switch (player) {
        case 1:
            cout << "Cockroach!" << endl;
            break;
        case 2:
            cout << "Foot!" << endl;
            break;
        case 3:
            cout << "Nuke!" << endl;
            break;
        }

        computer = rand() % 3 + 1;

        switch (computer) {
        case 1:
            cout << "Computer had Cockroach." << endl;
            if (player == 2) {
                cout << "You win!" << endl;
            }
            else if (player == 3) {
                cout << "Computer wins!" << endl;
            }
            else {
                cout << "A Tie!" << endl;
            }
            break;
        case 2:
            cout << "Computer had Foot." << endl;
            if (player == 3) {
                cout << "You win!" << endl;
            }
            else if (player == 1) {
                cout << "Computer wins!" << endl;
            }
            else {
                cout << "A Tie!" << endl;
            }
            break;
        case 3:
            cout << "Computer had Nuke." << endl;
            if (player == 1) {
                cout << "You win!" << endl;
            }
            else if (player == 2) {
                cout << "Computer wins!" << endl;
            }
            else {
                cout << "A Tie!" << endl;
            }
            break;
        }

        cout << endl;
        cout << "Cockroach-Foot-Nuke. Choose 1-4." << endl;
        cout << "1) Cockroach 2) Foot 3) Nuke 4) Exit" << endl;
    }

    return 0;
}
