#include <iostream>     // HANGMAN CODE DEVELOPED BY MOHAMMAD AHMAD ALI , JAMSHED AFRIDI , AIMAL KHAN , AMMAN HAIDER
#include <string>      // 2023325 , 2023269 , 2023369 , 2023109
#include <ctime>      // ctime library to initialise srand seed
#include <cctype>    // for tolower function
using namespace std;
int main(); // function protype for main function  
class easy; // class declarement for class easy
class animal; // for class animal 
class countries; // for claas countries
class fruit; // for class fruits
void displayDifficulty(); // to display difficulties in class hangman
int CheckGuess (char , string , string&); // function prototype for function checkguess
void hangman(char ); // gamestate function
// global variables
int lives = 5;
int choice;
int score = 0;
char back;
string messageL = "Incorrect Guess! YOU HAVE LOST A LIVE!";
string messageC = "Correct Guess! YOU ARE CLOSE TO SAVING HIM";
string message;
int difficultyChoice;
class Hangman // hangman class
{
	public :
		void DispMenu() // displays category menu
		{
	cout << "                                   |-----------------------------------------------------|"<<endl;
    cout << "                                   | H    H    A    N   N   GGGG   M     M    A    N   N |"<<endl;
    cout << "                                   | H    H   A A   NN  N  G       MM   MM   A A   NN  N |"<<endl;
    cout << "                                   | HHHHHH AAAAA  N N N  G  GGG  M M M M  AAAAA  N N N  |"<<endl;
    cout << "                                   | H    H A   A  N  NN  G    G  M  M  M A   A  N  NN   |"<<endl;
    cout << "                                   | H    H A   A  N   N   GGGG   M     M A   A  N   N   |"<<endl;
    cout << "                                   |-----------------------------------------------------|"<<endl;
		   cout << endl;
		   cout << endl;
		    cout << "                                                 |------------------------|"<<endl;
		    cout << "                                                 | Select your Category   |"<<endl;
		    cout << "                                                 |                        |"<<endl;
		    cout << "                                                 |1.      Countries       |"<<endl;
		    cout << "                                                 |2.        Fruit         |"<<endl;
		    cout << "                                                 |3.       Animals        |"<<endl;
		    cout << "                                                 |4.        back          |"<<endl;
		    cout << "                                                 |------------------------|"<<endl;
		    cout << endl;

		}
		void CategorySelector (countries &obj1 , fruit  &obj2 , animal &obj3); // category selection function called
	    int CheckGuess (char GuessedLetter , string real_word , string &hidden_word) //Checks for the guessed letter by iteration
	    {
	    	int match = 0;
	    	int words = real_word.length();
	    	for (int i = 0 ; i < words ; i++) // for loop goes through the string array to check for similar letters
	    	{
	    		if (GuessedLetter == hidden_word[i] )
	    		{
	    			return 0;
				}
				if (GuessedLetter == real_word[i])
				{
					hidden_word [i] = GuessedLetter ;
					match ++;
				}
			}
			return match; // rerturns the amount of returned letter and is printed in the main console 
		}
	void hangman(char GameState , string GameMessage) // Function for displaying the game state
{
    string HeadRope = "|"; 
    string Floor = "====";

    if (GameState == 'f') // when the player has beeen freed
    {
        HeadRope = " ";
    }

    if (GameState == 'h') // when the character has been hanged
    {
        Floor = "     ";
    }

    cout << "                                         _________________________" << endl;
    cout << "                                         |           " << HeadRope << "           |" << endl;
    cout << "                                         |           " << HeadRope << "           |" << endl;
    cout << "                                         |           O           |" << endl;
    cout << "                                         |          /|\\          |" << endl;
    cout << "                                         |Friend---> |           |" << endl;
    cout << "                                         |          / \\          |           "<<GameMessage << endl;
    cout << "                                         ==========" << Floor << "===========                     / "<<endl;
    cout << "                                         |                       |                    O " << endl;
    cout << "                                         |                       |                   /|\\  <---- Jallad" << endl;
    cout << "                                         |                       |                    | " << endl;
    cout << "                                         |                       |                   / \\  " << endl;
    cout << "=========================================|_______________________|======================================================" << endl;
}
	
	
		
		
};

// classes for the game display and functioning 
class easy : public  Hangman
{   
   public :
   	void EasyDifficultyFruits (string &hide_FruitE , char &fruitLetter ,string &FruitnameE )
    {
   		while (lives!=0) // while loop runs until the lioves are 0
   		{
   			// displaying game contents 
			message = "Guess The correct word or I will hang him ";
			hangman ('n' , message);
   			cout << "                                            Reamaining Lives : "<<lives<<endl;
   			cout << "                                                  score      : "<<score<<endl;
   			cout << "                                                  "<<hide_FruitE << endl;
   			cout << "                                           Please Enter a letter "<<endl;;
			cout<<  "                                                    ", cin >> fruitLetter;
   			fruitLetter = tolower (fruitLetter); // every word entered shall be lowercased
			system ("cls");
   		
		   // if statements to declare when the entered letter is either correct or false 
		   	if (CheckGuess (fruitLetter ,FruitnameE,hide_FruitE) == 0 ) 
   			{
   			     cout << messageL<<endl;
				  lives --;	 // when the entered letter is wrong
				  score = score - 100;
		    }
		    else  // when the entered letter is correct
		    {
		    	cout << messageC<<endl;
		    	score= score + 1000;
			}
			if (hide_FruitE == FruitnameE)
			{
				// When the entered letter is correct the player wins
				message =  "CONGRATULATIONS YOU WON! HE'S FREED!!";
				hangman ('f' , message);
				cout << "Reamaining Lives : "<<lives<<endl;
				cout << "YOUR SCORE : "<<score<<endl;
				cout << "The Word is : "<<FruitnameE<<endl;
				cout << endl;
				cout << "PLAY AGAIN?"<<endl;
				cout << "Press B for Main menu or P to play again "<<endl; // Asks the user weather he wants to play again or quit
				cin >> back;
				back = tolower(back);
				if (back == 'b') // returns to main
				{
					system ("cls");
					main();
				}
				if (back == 'p') // returns to category selection
				{
					system ("cls");
					DispMenu();
				}
			    else
				{  // if invalid charecter is entered it'll automatically return to main
					system ("cls");
					cout << "Invalid Choice, Returning to main menu"<<endl;
				    main();
				}
			}
			   
		   }
		   if (lives == 0) // if the lives are finished and the player loses
		   {
		   	message = "YOU LOST! HE HAS BEEN HANGED!";
		   	hangman ('h' , message);
		   		cout << endl;
				cout << "Score :"<<score <<endl;
				cout << "PLAY AGAIN?"<<endl;
				cout << "Press B for Main menu or P to play again "<<endl;
				cin >> back;
				back = tolower(back);
					if (back == 'b')
				{
					system ("cls");
					main();
				}
				if (back == 'p')
				{
					system ("cls");
					DispMenu();
				}
				else
				{
					system ("cls");
					cout << "Invalid Choice, Returning to main menu"<<endl;
				    main();
				}
		   	
		   }
	   }

};