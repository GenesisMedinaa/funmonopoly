
#ifndef MONOPOLY_HPP
#define MONOPOLY_HPP

#include <string>
using namespace std;

struct monopoly{
    int data;
    monopoly* next;
};

class theBoard{
   private:
   monopoly* head;
   monopoly* tail;
   monopoly* current;
   public:
   theBoard(){
      head = nullptr;
      tail = nullptr;
      current = nullptr;
   }

   void append(int num);
   int retrieve();
   void move(int spaces);   
};

#endif
