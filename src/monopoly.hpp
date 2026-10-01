
#ifndef MONOPOLY_HPP
#define MONOPOLY_HPP

#include <string>
using namespace std;


struct monopoly{
    string name;
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

   void append(string name);
   string retrieve();
   void move(int spaces);   
};

#endif
