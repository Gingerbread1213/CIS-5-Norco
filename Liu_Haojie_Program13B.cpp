#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

const int NUM_ROW = 4, NUM_COLS=3;


void fillNameArray(string name[][NUM_COLS]);
void displaySeatingChart(string name[][NUM_COLS]);

int main(){
    
    string name[NUM_ROW][NUM_COLS];
    
    fillNameArray(name);
    displaySeatingChart(name);

    
    
    return 0;
}



void fillNameArray(string name[][NUM_COLS]){

  fstream nameFile;
    
  nameFile.open("students-1.txt");

  for (int i = 0; i<NUM_ROW; i++){
   for (int j = 0; j<NUM_COLS; j++){
        nameFile >> name[i][j];
     }
  }
  
  return;
}

void displaySeatingChart(string name[][NUM_COLS]){

  for (int i = 0; i<NUM_ROW; i++){
    for (int j = 0; j<NUM_COLS; j++){
      cout << setw(10) << name[i][j];
    }
    cout << endl;
  }
  return;
}
