#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>


using namespace std;


void noodle(float &total);
void rice(float &total);
void soup(float &total);
void bread(float &total);
void more(bool &condition);

int main(){
    
    int choice;
    
    string Y_N;
    string name = "China Town";
    string slogan = "WE COOK YOUR BEST FOOD!!!";
    
    bool condition = true;
    
    float total = 0.0;
    
    const string ITEM1 = "noodle";
    const string ITEM2 = "rice";
    const string ITEM3 = "soup";
    const string ITEM4 = "bread";
    
    const float COST_ITEM1 = 11;
    const float COST_ITEM2 = 12.5;
    const float COST_ITEM3 = 9.25;
    const float COST_ITEM4 = 9;


    
    cout << "Welcome to " << name << "\n" << slogan << endl;
    do{
        cout << "Here is the recipe: " << endl;
        cout << "1." << left << setw(7) << ITEM1 << right << setw(7) << COST_ITEM1 << "$" << "\n";
        cout << "2." << left << setw(7) << ITEM2 << right << setw(7) << COST_ITEM2 << "$" << "\n";
        cout << "3." << left << setw(7) << ITEM3 << right << setw(7) << COST_ITEM3 << "$" << "\n";
        cout << "4." << left << setw(7) << ITEM4 << right << setw(7) << COST_ITEM4 << "$" << "\n";
        cout << "5." << left << setw(7) << "Quit" <<endl;
        
        cin >> choice;
        
        if (choice == 1){
            noodle(total);
            more(condition);
        }
        else if (choice == 2){
            rice(total);
            more(condition);
        }
        else if (choice == 3){
            soup(total);
            more(condition);
        }
        else if (choice == 4){
            bread(total);
            more(condition);
        }
        else if (choice == 5){
            condition = false;
        }
        
    }
    while(condition == true);
    
    cout << "Thank you for ordering in China Town, WE COOK YOUR BEST FOOD!!!" << endl;
    cout << "Here is your total: \n" << total << "$" << endl;
    
    
    return 0;
}


void more(bool &condition){
    char index;
    cout << "would you like to order more? (y/n)" << endl;
    cin >> index;
    if (index == 'y'){
        condition = true;
    }
    else if (index == 'n'){
        condition = false;
    }
    
    return;
}




void noodle(float &total){
    const float COST = 11;
    string Y_N;
    const float COST_ADD_ON = 5;
    
    total = total + COST;
    
    cout << "each Add on is " << COST_ADD_ON << "$" <<endl;
    cout << "Do you want green onion? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }
    
    cout << "Do you want garlic? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }
    
    cout << "Do you want tofu? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }

    
    
    return;
}

void rice(float &total){
    const float COST = 12.5;
    string Y_N;
    const float COST_ADD_ON = 5;
    
    total = total + COST;
    
    cout << "each Add on is " << COST_ADD_ON << "$" <<endl;
    cout << "Do you want green onion? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }
    
    cout << "Do you want garlic? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }
    
    cout << "Do you want tofu? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }

    
    
    return;
}

void soup(float &total){
    const float COST = 9.25;
    string Y_N;
    const float COST_ADD_ON = 5;
    
    total = total + COST;
    
    cout << "each Add on is " << COST_ADD_ON << "$" <<endl;
    cout << "Do you want green onion? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }
    
    cout << "Do you want garlic? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }
    
    cout << "Do you want tofu? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }

    
    
    return;
}


void bread(float &total){
    const float COST = 9;
    string Y_N;
    const float COST_ADD_ON = 5;
    
    total = total + COST;
    
    cout << "each Add on is " << COST_ADD_ON << "$" <<endl;
    cout << "Do you want green onion? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }
    
    cout << "Do you want garlic? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }
    
    cout << "Do you want tofu? \n";
    cout << "Y or N \n";
    cin >> Y_N;
    if (Y_N == "Y" || Y_N == "y"){
        total = total + COST_ADD_ON;
    }
    else if (Y_N == "N" || Y_N == "n"){
        total = total;
    }
    else{
        cout << "please choose Y or N"<< endl;
        return;
    }

    
    
    return;
}
