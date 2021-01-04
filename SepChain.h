#ifndef SepChain_H
#define SepChain_H

#include "LinkedList.h"

const int arraysize = 101;

class Chaining
{
private:
  Linkedlist array[arraysize];
public:
  Chaining();
  void insert(string, float, int);
  // void Delete(int data);
  bool search(float);
  int Hashfunc(float);
  void display(float);
  // bool isFull();
  // bool isEmpty();
  ~Chaining();
};

#endif // SepChain_H
