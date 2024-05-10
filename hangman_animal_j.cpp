#include <iostream>
#include <string>
#include <ctime>
#include <cctype>

using namespace std;

namespace Animalss {
    template <typename A>
    class animal {
    public:
        unsigned int seed; 
        char AnimalLetter; 
        string AnimalnameE; 
        string AnimalnameM; 
        string AnimalnameH; 
        string GuessAnimal;
        string EasyAnimal[7] = {"cat", "dog", "lion", "zebra", "giraffe", "bear", "pigeon"};
        string MediumAnimal[7] = {"chameleon", "mantis", "tigeress", "crane", "cobra", "blackmamba", "kangaroo"};
        string HardAnimal[7] = {"ababeel", "markhor", "baldeagle", "dove", "stork", "leemar", "hippopotamus"};
        string hide_AnimalE;
        string hide_AnimalM;
        string hide_AnimalH;
        int Animal_number;

        animal(int s) {
            seed = s;
            srand(seed);
            Animal_number = rand() % 7;
            AnimalnameE = EasyAnimal[Animal_number];
            AnimalnameM = MediumAnimal[Animal_number];
            AnimalnameH = HardAnimal[Animal_number];
            hide_AnimalE = string(AnimalnameE.length(), '-');
            hide_AnimalM = string(AnimalnameM.length(), '-');
            hide_AnimalH = string(AnimalnameH.length(), '-');
        }

        void AnimalGame() {
            displayDifficulty();
            if (difficultyChoice == 1) {
                EasyDifficultyFruits(hide_AnimalE , AnimalLetter ,AnimalnameE );
            }
            if (difficultyChoice == 2) {
                EasyDifficultyFruits(hide_AnimalM, AnimalLetter, AnimalnameM);
            }
            if (difficultyChoice == 3) {
                EasyDifficultyFruits(hide_AnimalH, AnimalLetter, AnimalnameH);
            }
        }

        void displayDifficulty() {
            cout << "                     hangman game for Animals   "<<endl<<endl<<endl;
            cout << "Choose difficulty: " << endl;
            cout << "1. Easy" << endl;
            cout << "2. Medium" << endl;
            cout << "3. Hard" << endl;
            cout << "Enter your choice: ";
            cin >> difficultyChoice;
        }

        void EasyDifficultyFruits(string& hiddenAnimal, char& letter, const string& actualAnimal) {
            int remainingAttempts = 5;
            cout << "Guess the animal name: " << hiddenAnimal << endl;
            while (remainingAttempts > 0) {
                cout << "Enter a letter: ";
                cin >> letter;
                bool found = false;
                for (int i = 0; i < actualAnimal.length(); ++i) {
                    if (actualAnimal[i] == letter) {
                        hiddenAnimal[i] = letter;
                        found = true;
                    }
                }
                if (!found) {
                    cout << "Incorrect guess! Try again." << endl;
                    remainingAttempts--;
                } else {
                    cout << "Correct guess! Current progress: " << hiddenAnimal << endl;
                    if (hiddenAnimal == actualAnimal) {
                        cout << "Congratulations! You guessed the animal name: " << actualAnimal << endl;
                        return;
                    }
                }
            }
            cout << "Out of attempts! The animal name was: " << actualAnimal << endl;
        }

        int difficultyChoice;
        ~animal(){};
    };
}

int main() {
    srand(time(0));
    Animalss::animal<string> Animal(rand());
    Animal.AnimalGame();

    return 0;
}
