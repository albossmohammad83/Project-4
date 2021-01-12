#include <iostream>
#include <ctime>
#include <cstddef>
#include <cstdlib>
using namespace std;

class Moo{

private:
  int digit1;
  int digit2;
  int digit3;

  static int highscore;          //variable to keep track of highest score for ALL Moo objects
 
public:
  Moo();                            
  int guess(int threedig);           //returns number of correct digits in 3 digit guess

  static void checkhighscore(int score);   //function called to possibly update highest score
  static int gethigh();                    //accessor function for highest score
};

int Moo::highscore = 10000;  // must initialize static variable outside of declaration

int main ( ) {

int myguess;           // current guess
int tries = 1;         // number of user tries

for (int i = 1; i<5;  i++){     // executes 5 games

	Moo game1;         // create new game so have new number
	tries= 1;
    cout << "guess a number " << endl;
    cin >> myguess;              
	                  // while user does not guess correctly
    while (game1.guess(myguess) != 3){    
       cout << game1.guess(myguess) << " correct " << endl;
       cout << "guess a number " << endl;
       cin >> myguess;
	   tries++;       // count the number of guesses
    }
    cout << "You won in " << tries <<  " tries " << endl;	
    Moo::checkhighscore(tries);          // enter new score to be checked for high score status  

	Moo game2;         // create new game so have new number
	tries= 1;
    cout << "guess a number " << endl;
    cin >> myguess;              
	                  // while user does not guess correctly
    while (game2.guess(myguess) != 3){    
       cout << game2.guess(myguess) << " correct " << endl;
       cout << "guess a number " << endl;
       cin >> myguess;
	   tries++;       // count the number of guesses
    }
	Moo::checkhighscore(tries);       // enter new score to be checked for high score status  

    cout << "You won in " << tries <<  " tries " << endl;	

	cout << "highest score was "  << Moo::gethigh();    // output highest score for all games
}
  
return 0;
}



// initialize secret number 
Moo::Moo(){
	digit1 = rand() % 10;
	digit2 = rand() % 10;
	digit3 = rand() % 10;
 cout << "for debugging only " << digit1 << digit2 << digit3 << endl;
}



// returns number of correct digits in 3 digit guess 
int Moo::guess(int threedig){
    int g3 = threedig % 10;
	threedig = threedig /10;
	int g2 = threedig % 10;
	threedig = threedig/ 10;
	int g1 = threedig;
	int count = 0;
	if (g1 == digit1) count++;
	if (g2 == digit2) count++;
	if (g3 == digit3) count++;
	return count;

}

void Moo::checkhighscore(int score ) {
   if (score < highscore)
	   highscore = score;

}

int Moo::gethigh() {
  return highscore;
}


