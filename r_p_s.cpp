#include <iostream>
#include <ctime>
using namespace std;

char getPlayerChoice();
char getCompChoice();
void showChoice(char choice);
void getWinner(char player, char comp);

int main(){
  
  char player;
  char comp;
  
  cout << "ROCK_PAPER_SCISSORS" << '\n';
  cout << "___________________" << '\n';
  
  player = getPlayerChoice();
  cout << "Your choice is: ";
  showChoice(player);
  
  comp = getCompChoice();
  cout << "Computer's choice: ";
  showChoice(comp);
  
  getWinner (player, comp);
  
  return 0;
}

char getPlayerChoice(){
  char player;
  
  do {
    cout << "Choose one of the following:" << '\n';
    cout << "'r' for Rock" << '\n';
    cout << "'p' for Paper" << '\n';
    cout << "'s' for Scissors" << '\n';
    cin >> player;
  }
  while (player != 'r' && player != 'p' && player != 's');
  
  return player;
}

char getCompChoice(){
  srand(time(0));
  int num = (rand() % 3) + 1;
  
  switch (num){
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
  }
}

void showChoice(char choice){
  switch(choice){
    case 'r':
      cout << "Rock" << '\n';
      break;
    case 'p':
      cout << "Paper" << '\n';
      break;
    case 's':
      cout << "Scissors" << '\n';
      break;
  }
}

void getWinner(char player, char comp){
  switch (player){
    case 'r':
      if (comp == 'r'){
        cout << "It's a tie!" << '\n';
      }
      else if (comp == 'p'){
        cout << "You lose!" << '\n';
      }
      else{
        cout << "You win!" << '\n';
      }
      break;
     
    case 'p':
      if (comp == 'r'){
        cout << "You win!" << '\n';
      }
      else if (comp == 'p'){
        cout << "It's a tie!" << '\n';
      }
      else{
        cout << "You lose!" << '\n';
      } 
      break;
    
    case 's':
      if (comp == 'r'){
        cout << "You lose!" << '\n';
      }
      else if (comp == 'p'){
        cout << "You win!" << '\n';
      }
      else{
        cout << "It's a tie!" << '\n';
      }  
      break;
  }
}