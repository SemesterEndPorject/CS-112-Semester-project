#include <iostream>
#include <string>
#include <ctime>
#include <cctype>
using namespace std;

class Hangman {
public:
    void CategorySelector();
    void DifficultySelector();
    void displayDifficulty();
    void displayMenu();
    void CountryGame();
    void FruitGame();
    void AnimalGame();
};

void Hangman::CategorySelector() {
    bool ValidChoice = false;
    while (!ValidChoice) {
        int choice;
        cout << "Choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                CountryGame();
                ValidChoice = true;
                break;
            case 2:
                FruitGame();
                ValidChoice = true;
                break;
            case 3:
                AnimalGame();
                ValidChoice = true;
                break;
            case 4:
                main(); 
                break;
            default:
                cout << "Invalid choice. Try again!" << endl;
                displayMenu();
                break;
        }
    }
}

void Hangman::DifficultySelector() {
    bool ValidChoice = false;
    while (!ValidChoice) {
        int choice;
        cout << "Choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Easy difficulty selected." << endl;
                ValidChoice = true;
                break;
            case 2:
                cout << "Medium difficulty selected." << endl;
                ValidChoice = true;
                break;
            case 3:
                cout << "Hard difficulty selected." << endl;
                ValidChoice = true;
                break;
            case 4:
                main(); // Not a good practice, consider redesigning
                break;
            default:
                cout << "Invalid choice. Try again!" << endl;
                displayDifficulty();
                break;
        }
    }
}

void Hangman::displayMenu() {
    cout << "Welcome to Hangman!" << endl;
    cout << "1. Countries" << endl;
    cout << "2. Fruits" << endl;
    cout << "3. Animals" << endl;
    cout << "4. Exit" << endl;
}

void Hangman::displayDifficulty() {
    cout << "Select difficulty:" << endl;
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << "4. Back to main menu" << endl;
}

void Hangman::CountryGame() {

    cout << "Country game" << endl;
}

void Hangman::FruitGame() {
  
    cout << "Fruit game" << endl;
}

void Hangman::AnimalGame() {
    
    cout << "Animal game" << endl;
}

int main() {
    Hangman game;
    game.displayMenu();
    game.CategorySelector();
    game.displayDifficulty();
    game.DifficultySelector();
    return 0;
}
