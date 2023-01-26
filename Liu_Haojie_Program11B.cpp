#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void login();
bool checkCredentials(string username , string password);

int main(){
    
    login();
    
    return 0;
}

void login(){
    
    string username;
    string password;
    int attempts = 3;

    for (int i = attempts; i > 0; i--){
      cout << "Username: ";
      cin >> username;
      cout << "\n";
      cout << "password: ";
      cin >> password;
      
      if((checkCredentials(username, password) == false)){
          attempts = attempts -1;
          cout << "you have " << attempts << " more attempts remaining" << endl;
      }
      else if((checkCredentials(username, password) == false)){
          cout << "attempts exceeded" << endl;
      }
    }
    return;
}

bool checkCredentials(string username, string password){
    string CorrectUsername;
    string CorrectPassword;
    ifstream inFile;
    inFile.open("correctData.txt");
    
    inFile >> CorrectUsername;
    inFile >> CorrectPassword;
    
    if ((CorrectUsername == username) && (CorrectPassword == password)){
        cout << "Login successful" << endl;
        inFile.close();
        return true;
        
    }
    else{
        cout << "Invalid username or password.";
        inFile.close();
        return false;
    }
    
    
}
