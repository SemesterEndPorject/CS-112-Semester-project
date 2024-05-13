class countries : public easy  
{
	public :
	  int seed;
    char CountryLetter;
    string CountrynameE;
    string CountrynameM;
    string CountrynameH;
    string GuessCountry;
    string EasyCountry[7] = {"pakistan", "india", "china", "russia", "america", "canada", "iran"};
    string MediumCountry[7] = {"sweden", "denmark", "malaysia", "chile", "panama", "nigeria", "belgium"};
    string HardCountry[7] = {"estonia", "czechia", "latvia", "uruguay", "kzakhistan", "madagascar", "chad"};
    string hide_CountryE; 
    string hide_CountryM; 
    string hide_CountryH; 
    int Country_number;
    
	
	countries(int s) {
      seed = s;
     srand(seed);
     Country_number = rand() % 7; 
     CountrynameE = EasyCountry[Country_number];
     CountrynameM = MediumCountry[Country_number];
     CountrynameH = HardCountry[Country_number];
	 hide_CountryE = string(CountrynameE.length(), '-'); // Assign dashes to hide_CountryE
  	 hide_CountryM = string(CountrynameM.length(), '-'); // Assign dashes to hide_CountryM
	 hide_CountryH = string(CountrynameH.length(), '-'); // Assign dashes to hide_CountryH

    }

    void CountryGame() {
            
        displayDifficulty();
    if (difficultyChoice == 1)
        {
        EasyDifficultyFruits (hide_CountryE , CountryLetter ,CountrynameE );
		}
	if (difficultyChoice == 2)
	{
    	EasyDifficultyFruits(hide_CountryM, CountryLetter, CountrynameM);
		}
	if (difficultyChoice == 3)
	{
	    EasyDifficultyFruits (hide_CountryH, CountryLetter, CountrynameH);
	}