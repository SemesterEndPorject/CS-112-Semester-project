#include <iostream>
#include <cstdlib> // for srand and rand
#include <ctime>   // for time
#include <string>
using namespace std;

// using namespace for countries
namespace countriess{
class countries {
public:
    int seed;
    char CountryLetter;
    string CountrynameE;
    string CountrynameM;
    string CountrynameH;
    string GuessCountry;
    string EasyCountry[7] = {"pakistan", "india", "china", "russia", "america", "canada", "iran"};
    string MediumCountry[7] = {"sweden", "denmark", "malaysia", "chile", "panama", "nigeria", "belgium"};
    string HardCountry[7] = {"estonia", "czechia", "latvia", "uruguay", "kazakhstan", "madagascar", "chad"};
    string hide_CountryE; 
    string hide_CountryM; 
    string hide_CountryH; 
    int Country_number;
    
    //constructer using;
    countries(int s) {
        seed = s;
        srand(seed);
        Country_number = rand() % 7; 
        CountrynameE = EasyCountry[Country_number];
        CountrynameM = MediumCountry[Country_number];
        CountrynameH = HardCountry[Country_number];
        hide_CountryE = string(CountrynameE.length(), '-');
        hide_CountryM = string(CountrynameM.length(), '-');
        hide_CountryH = string(CountrynameH.length(), '-');
    }

    void CountryGame() {
        displayDifficulty();
        //for easy option
        if (difficultyChoice == 1) {
            EasyDifficultyFruits(hide_CountryE, CountryLetter, CountrynameE);
        } 
        //for middle option
        else if (difficultyChoice == 2) {
            EasyDifficultyFruits(hide_CountryM, CountryLetter, CountrynameM);
        } 
        //for hard option diffculty
        else if (difficultyChoice == 3) {
            EasyDifficultyFruits(hide_CountryH, CountryLetter, CountrynameH);
        }
    }

private:
    void displayDifficulty() {
        cout << "                     hangman game for countries  "<<endl<<endl<<endl;
        cout << "Choose difficulty: " << endl;
        cout << "1. Easy" << endl;
        cout << "2. Medium" << endl;
        cout << "3. Hard" << endl;
        cout << "Enter your choice: ";
        cin >> difficultyChoice;
    }

    void EasyDifficultyFruits(string& hiddenCountry, char& letter, const string& actualCountry) {
        int remainingAttempts = 5; // Number of attempts allowed
        cout << "Guess the country name: " << hiddenCountry << endl;
        while (remainingAttempts > 0) {
            cout << "Enter a letter: ";
            cin >> letter;
            bool found = false;
            for (int i = 0; i < actualCountry.length(); ++i) {
                if (actualCountry[i] == letter) {
                    hiddenCountry[i] = letter;
                    found = true;
                }
            }
            if (!found) {
                cout << "Incorrect guess! Try again." << endl;
                remainingAttempts--;
            } else {
                cout << "Correct guess! Current progress: " << hiddenCountry << endl;
                if (hiddenCountry == actualCountry) {
                    cout << "Congratulations! You guessed the country name: " << actualCountry << endl;
                    return;
                }
            }
        }
        cout << "Out of attempts! The country name was: " << actualCountry << endl;
    }

    int difficultyChoice;
};
}
int main() {
    
    
   srand(time(0));
//namespace using 
  countriess::  countries c(rand());
    c.CountryGame();
    return 0;
}
