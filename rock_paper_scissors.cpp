/*
Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.
Instructs the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
Compares the user’s choice and the computer’s choice and determine the winner.
Informs the user who the winner is.
*/

#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  // prompt user to select either Rock, Paper or scissors:
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) lizard\n";
  std::cout << "5) spock\n\n";

  std::cout << "shoot: ";
  

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;
  
  std::cin >> user;  
  
  std::cout << "computer: " << computer << "\n\n";
  
  if (user == rock && computer == scissors) {
      
    std::cout << "You Win!\n";
    
  } 
  
  else if (user == scissors && computer == paper) {
    
    std::cout << "You Win!\n";
    
  } 
  
  else if (user == paper && computer == rock) {
    
    std::cout << "You Win!\n";
      
  } 
  
  else if (user == lizard && computer == spock) {
      
    std::cout << "You Win!\n";
      
  } 
  
  else if (user == spock && computer == scissors) {
      
    std::cout << "You Win!\n";
      
  } 
  
  else if (user == scissors && computer == lizard) {
      
    std::cout << "You Win!\n";
      
  } 
  
  else if (user == lizard && computer == paper) {
      
    std::cout << "You Win!\n";
      
  } 
  
  else if (user == paper && computer == spock) {
      
    std::cout << "You Win!\n";
      
  } 
  
  else if (user == spock && computer == rock) {
      
    std::cout << "You Win!\n";
      
  } 
  
  else if (user == rock && computer == lizard) {
      
    std::cout << "You Win!\n";
      
  } 
  
  else if (user == computer) {
      
    std::cout << "It's a draw!\n";
      
  } 
  
  else {
      
    std::cout << "You Lose!\n";
      
  }
  
}