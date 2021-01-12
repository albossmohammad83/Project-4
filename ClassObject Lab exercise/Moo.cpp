#include <iostream>
#include <ctime>
#include <cstddef>
using namespace std;

class Moo{
public:
  Moo();
  Moo(int);
  int guess(int);
  void  setHighScore(int);
  int getHighScore();
private:
  int digit1;
  int digit2;
  int digit3;
  static int highscore;
};

int main ( ) {

Moo game1;         // create new game
int myguess;       // current guess
int tries = 1;     // number of user tries

cout << "guess a number " << endl;
cin >> myguess;
while (game1.guess(myguess) != 3){
    cout << game1.guess(myguess) << " correct " << endl;
    cout << "guess a number " << endl;
    cin >> myguess;
	tries++;
}

cout << "You won in " << "tries " << endl;
game1.setHighScore(tries);
cout << "High score so far is " << endl;
  
return 0;
}

int Moo::highscore = 0;

// initialize secret number to 'easy game' -- all same digit
Moo::Moo(){
 

}

// initialize secret number to 'game desired'
// if Same is 1 ==>  all 3 digits are random
// if Same is 2 ==>  two digits are the same, third is random
// if Same is 3 ==> all same digit
Moo::Moo(int same){



}

// returns number of correct digits in 3 digit guess 
int Moo::guess(int aguess){



	return 0;
}

// if parameter is higher than current high score, update high score
// precondition:  score is > 0
void Moo::setHighScore(int score) {
  
}

// return highest score so far
int Moo::getHighScore() {
  
}



