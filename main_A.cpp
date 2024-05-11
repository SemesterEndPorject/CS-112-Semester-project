#include <iostream>
#include <string>
#include <ctime>
#include <cctype>
using namespace std;




int main () 
{
    
    int choice; 
    // displaying the interface on the console
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
		    cout << "                                                 |   Select your Option   |"<<endl;
		    cout << "                                                 |                        |"<<endl;
		    cout << "                                                 |1.      Play game       |"<<endl;
		    cout << "                                                 |2.        Quit          |"<<endl;
		    cout << "                                                 |3.     About game       |"<<endl;
		    cout << "                                                 |------------------------|"<<endl;
            cout <<endl;
			cout << "                                                          Choice :";
            cin >> choice;
	   
	 
	 
	       
	   switch  (choice)
	   {
	   	 case 1 :
	   	  	cout<<"show a display "<<endl;

	   	  	break;
	   	   case 2 :
	       
		  	cout << "Thank you for playing our game <3"<<endl;
		   break;
	
		 case 3:
		int back;
		 	cout << "HangMan Game developed by undergraduate students of Faculty of Electrical Engineering of GIK institute Batch 33"<<endl;
		 	cout << "                                     Mohammad Ahmad Ali  ,2023325"<<endl;
		 	cout << "                                       Jamshed Afridi    ,2023269"<<endl;
		 	cout << "                                     Muhammad Aimal Khan ,2023369"<<endl;
		 	cout << "                                     Amman Haider Baloch ,2023109"<<endl;
		 	cout << endl;
		    cout << "                                      Instructor : Sir Said Nabi  "<<endl;
		    cout << "                                         Dated 20th April 2024  "<<endl;
		    cout << endl;
		    cout << "                               press B and enter to go back to main menu :  ";
		    cin >> back;
		    if (back == 'b' || back == 'B')
		    {
		     
				main ();
			}
		 	break;
		default :
			
			cout << "                        Invalid choice Please Try Again :)"<<endl;
			main();
			
	    }
	    
	  return 0;
	  
	  
	    
}
