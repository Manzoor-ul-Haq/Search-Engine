#include <iostream>
#include "SepChain.h"
using namespace std;

Chaining::Chaining()
{

}

Chaining::~Chaining()
{

}

int Chaining::Hashfunc(float rating)
{
  return rating * 10;
}

void Chaining::insert(string id, float rating, int votes)
{
  array[Hashfunc(rating)].addAtStart(id, rating, votes);
}

bool Chaining::search(float rating)
{
  if (Hashfunc(rating) > 100)
    return false;
  else if (array[Hashfunc(rating)].isEmpty() == true)
    return false;
  return array[Hashfunc(rating)].find1(rating);
}

void Chaining::display(float rating)
{
  if (Hashfunc(rating) < 101)
    array[Hashfunc(rating)].display();
  else
    cerr << "Does not exit" << endl;
}
