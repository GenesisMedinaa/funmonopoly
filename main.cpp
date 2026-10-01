using namespace std;
#include <iostream>
#include <string>
#include "src/monopoly.hpp"

//template code as given in assingment
int main(){
  theBoard board;
  board.append("Go");
  board.append("Mediterranean Avenue");
  board.append("Community Chest");
  board.append("Baltic Avenue");
  board.append("Income Tax");
  
  cout << board.retrieve() << endl; // Should print "Go"
  board.move(1);
  cout << board.retrieve() << endl; // Should print "Mediterranean Avenue"
  board.move(3);
  cout << board.retrieve() << endl; // Should print "Income Tax"

  for (int i = 0; i < 37; i++){
    board.move(1);
  }
  cout << board.retrieve() << endl; // Should print the next space in the circular list

}
