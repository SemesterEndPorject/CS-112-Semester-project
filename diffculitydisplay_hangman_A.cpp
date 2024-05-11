#include <iostream>
#include <string>
#include <ctime>
#include <cctype>
using namespace std;


void DifficultySelector() {
    cout << "difficulty   " << endl;
}

void displayDifficulty() // displaying the interface of the difficulty
{

    cout << "                                   |-----------------------------------------------------|" << endl;
    cout << "                                   | H    H    A    N   N   GGGG   M     M    A    N   N |" << endl;
    cout << "                                   | H    H   A A   NN  N  G       MM   MM   A A   NN  N |" << endl;
    cout << "                                   | HHHHHH AAAAA  N N N  G  GGG  M M M M  AAAAA  N N N  |" << endl;
    cout << "                                   | H    H A   A  N  NN  G    G  M  M  M A   A  N  NN   |" << endl;
    cout << "                                   | H    H A   A  N   N   GGGG   M     M A   A  N   N   |" << endl;
    cout << "                                   |-----------------------------------------------------|" << endl;
    cout << endl;
    cout << endl;
    cout << "                                                 |------------------------|" << endl;
    cout << "                                                 | Select your Difficulty |" << endl;
    cout << "                                                 |                        |" << endl;
    cout << "                                                 |1.        Easy          |" << endl;
    cout << "                                                 |2.       Medium         |" << endl;
    cout << "                                                 |3.        Hard          |" << endl;
    cout << "                                                 |4.      main menu       |" << endl;
    cout << "                                                 |------------------------|" << endl;
    DifficultySelector();
}

void handleDifficulty(int choice) {
    switch (choice) {
        case 1:
            cout << "You chose Easy." << endl;
            break;
        case 2:
            cout << "You chose Medium." << endl;
            break;
        case 3:
            cout << "You chose Hard." << endl;
            break;
        case 4:
            cout << "Back to main menu." << endl;
           
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }
}

int main() {
    int choice;
    displayDifficulty();
    cout << "Enter your choice: ";
    cin >> choice;
    handleDifficulty(choice);
    return 0;
}
