using namespace std;
#include <iostream>
#include <string>
#include "src/monopoly.hpp"

int main(){
  theBoard board;
  board.append(1);
  board.append(2);
  board.append(3);

  cout << board.retrieve() << endl; //expect output: 1
  board.move(1);
  cout << board.retrieve() << endl; //expect output: 2
  board.move(1);
  cout << board.retrieve() << endl; //expect output: 3

}
