// Haojie Liu

// CIS-5 Online

// March 21

// Program 5B: Restaurant Menu


#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>


using namespace std;

int main(){
    
    int choice;
    string Y_N;
    
    string name = "China Town";
    string slogan = "WE COOK YOUR BEST FOOD!!!";
    bool Add_on = false;
    float total = 0.0;
    const string ITEM1 = "noodle";
    const string ITEM2 = "rice";
    const string ITEM3 = "soup";
    const string ITEM4 = "bread";
    
    const float COST_ITEM1 = 11;
    const float COST_ITEM2 = 12.5;
    const float COST_ITEM3 = 9.25;
    const float COST_ITEM4 = 9;

    const float COST_ADD_ON = 5;

    
    cout << "Welcome to " << name << "\n" << slogan << endl;
    cout << "Here is the recipe: " << endl;
    cout << "1." << left << setw(7) << ITEM1 << right << setw(7) << COST_ITEM1 << "$" << "\n";
    cout << "2." << left << setw(7) << ITEM2 << right << setw(7) << COST_ITEM2 << "$" << "\n";
    cout << "3." << left << setw(7) << ITEM3 << right << setw(7) << COST_ITEM3 << "$" << "\n";
    cout << "4." << left << setw(7) << ITEM4 << right << setw(7) << COST_ITEM4 << "$" << "\n";
    
    cin >> choice;
    
    switch (choice){

        case 1:
            total = COST_ITEM1;
            cout << "each Add on is " << COST_ADD_ON << "$" <<endl;
            cout << "Do you want green onion? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;
            }
            
            cout << "Do you want garlic? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;
            }
            
            cout << "Do you want tofu? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;

            }
            break;
            
        case 2:
            total = COST_ITEM2;
            cout << "each Add on is " << COST_ADD_ON << "$" <<endl;
            cout << "Do you want beans? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;
            }
            
            cout << "Do you want chicken? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;
            }
            
            cout << "Do you want tofu? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;

            }
            break;
            
        case 3:
            total = COST_ITEM3;
            cout << "each Add on is " << COST_ADD_ON << "$" <<endl;
            cout << "Do you want green onion? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;
            }
            
            cout << "Do you want shrimp? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;
            }
            
            cout << "Do you want mushroom? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;

               
            }
            break;
            
        case 4:
            total = COST_ITEM4;
            cout << "each Add on is " << COST_ADD_ON << "$" <<endl;
            cout << "Do you want green onion? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;
            }
            
            cout << "Do you want garlic? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;
            }
            
            cout << "Do you want tofu? \n";
            cout << "Y or N \n";
            cin >> Y_N;
            if (Y_N == "Y" || Y_N == "y"){
                Add_on = true;
            }
            else if (Y_N == "N" || Y_N == "n"){
                Add_on = false;
            }
            else{
                cout << "please choose Y or N"<< endl;
                return 0;
            }
            
            
            if (Add_on == true){
                total = total + COST_ADD_ON;
            
            
            }
            break;
            
        default:
            cout << "Thank you for visiting China Town, WE COOK YOUR BEST FOOD!!!\n";
            cout << "Good Bye" << endl;
            break;
    }
    
    cout << "Thank you for ordering in China Town, WE COOK YOUR BEST FOOD!!!" << endl;
    cout << "Here is your total: \n" << total << "$" << endl;
    
    
    return 0;
}

