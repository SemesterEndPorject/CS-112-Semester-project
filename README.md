
#include <iostream>     
#include <string>      
#include <ctime>      
#include <cctype>   
using namespace std;
//forward declaration of the class and hangman is base class
class Hangman;
class easy;


// class fruit are inheritance from class easy and heritance from hangman class	
class fruit : public easy {
public:
    // initialising the variables for Fruit class
	int seed;
    char fruitLetter;  
    string FruitnameE;
    string FruitnameM;
    string FruitnameH;
    string GuessFruit;
    string EasyFruits[7] = {"apple", "bannana", "strawberry", "mango", "rasberry", "orange", "grapes"}; // easy fruit words array
    string MediumFruits[7] = {"guava", "dragonfruit", "apricot", "peach", "watermelon", "melons", "blueberry"}; // medium fruit words array
    string HardFruits[7] = {"kiwi", "pineapple", "leeche", "papaya", "fig", "guava", "starfruit"}; // hard fruit words array
    //storing the hidden word
    string hide_FruitE; 
    string hide_FruitM;
    string hide_FruitH; 
    easy fruit1;
    int Fruit_number;
    
	
	fruit(int s) // constructor for class fruit
	 {
      seed = s;
     srand(seed);
    Fruit_number = rand() % 7; 
    FruitnameE = EasyFruits[Fruit_number];
    FruitnameM = MediumFruits[Fruit_number];
    FruitnameH = HardFruits[Fruit_number];
    // replacing the the charecters of the words -------
    hide_FruitE = string(FruitnameE.length(), '-'); 
    hide_FruitM = string(FruitnameM.length(), '-'); 
    hide_FruitH = string(FruitnameH.length(), '-'); 
    }

    void FruitGame() 
	{
            
        displayDifficulty();
        if (difficultyChoice == 1)
        {
             EasyDifficultyFruits (hide_FruitE , fruitLetter ,FruitnameE );
		}
		   if (difficultyChoice == 2)
        {
        	EasyDifficultyFruits (hide_FruitM , fruitLetter ,FruitnameM );
		}
		   if (difficultyChoice == 3)
        {
        	EasyDifficultyFruits (hide_FruitH , fruitLetter ,FruitnameH );
		}
       
	    }
	    ~fruit() // destructor for class fruit 
		{
		};
};
int main(){
    fruit f (rand());
    fruit f (rand()); 
    f.FruitGame();
    return 0;
}
