#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    
    ifstream input;
    input.open("Random.txt");
    
    string index, total, max, min, average;

    
    while(input >> index){
        cout << index;
    }
    
    return 0;
}
