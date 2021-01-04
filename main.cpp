#include <iostream>
#include <fstream>
#include <string>
#include "SepChain.h"
using namespace std;

int main()
{
  string id;
  float rating;
  int votes;
  // int count = 0;
  // float max = 0.0;
  // float min = 10;
  // int maxi = 0;
  // int mini = 2070726;
  Chaining chain;
  ifstream read;
  read.open("data.txt");
  read >> id;
  read >> id;
  read >> id;
  while(!read.eof())
  {
    read >> id;
    read >> rating;
    read >> votes;
    // if (rating > max)
    //   max = rating;
    // if (rating < min)
    //   min = rating;
    chain.insert(id, rating, votes);
    // if (votes > maxi)
    //   maxi = votes;
    // if (votes < mini)
    //   mini = votes;
    // total = (votes / (votes + m)) * rating + (m / (votes + m)) * C;
    // count++;

    //cout << id << "\t" << rating << "\t" << votes << endl;
  }
  read.close();
  // cout << "Total no. of movies: " << count << endl;
  //cout << "Maximum rating: " << max <<  endl;
  //cout << "Minimum rating: " << min <<  endl;
  //cout << chain.search(0) << endl;
  // cout << "Maximum votes: " << maxi <<  endl;
  // cout << "Minimum votes: " << mini <<  endl;
  cout << chain.search(10.0) <<  endl;
  //chain.display(0);
}
