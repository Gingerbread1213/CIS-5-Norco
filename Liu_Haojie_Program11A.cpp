#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

  ifstream inFile;
  ofstream outFile;

  inFile.open("Random.txt");
  outFile.open("Outcome.txt");
  int index, average, round;
  int total = 0;
  int max = 0;
  int min = 0;
  while(inFile >> index){
    total = total + index;

    if (index > max){
      max = index;
    }

    
    if (index < min){
      min = index;
    }
    else if (min == 0){
      min = index;
    }

    round = round + 1;
  }

  average = total/round;

  outFile << "total: " << total<< endl;
  outFile << "average: "<< average << endl;
  outFile << "high number: " << max<< endl;
  outFile << "low number: "<< min << endl;

  inFile.close();
  outFile.close();
  
  return 0;
}
