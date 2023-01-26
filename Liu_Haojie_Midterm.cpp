#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;


void MenuDisaplay(){
    
    cout << "1. 10K Racer\n" << "2. Gymnasitcs Meet\n" << "3. Quit" << endl;
    
    return;
}



bool Validation(int choice){
    int index = choice;
    if ((index > 0) && (index <= 3)){
        return true;
    }
    else {
        return false;
    }
}



void Race(){
    string name1,name2,name3;
    float time1,time2,time3;
    
    cout << "Please type the full name of the three runners:" << endl;
    cout << "First runner"<< endl;
    cin >> name1;
    cout << "second runner"<< endl;
    cin >> name2;
    cout << "third runner"<< endl;
    cin >> name3;

    cout << "Please type the time that the three runners took:" << endl;
    cout << "First runner"<< endl;
    cin >> time1;
    while(time1<0){
        cout << "pleaese type a positive number" << endl;
        cin >> time1;
    }
    cout << "second runner"<< endl;
    cin >> time2;
    while(time2<0){
        cout << "pleaese type a positive number" << endl;
        cin >> time2;
    }
    cout << "third runner"<< endl;
    cin >> time3;
    while(time3<0){
        cout << "pleaese type a positive number" << endl;
        cin >> time3;
    }
    
    if ((time1 <= time2)&&(time2 <= time3)){
        cout << "----------------------" << endl;
        cout << setw(6) << name1 << right << "|" << setw(6) << name2 << right  << "|" << setw(6) << name3 << right<< "|" << endl;
        cout << "----------------------" << endl;
        cout << setw(6) << time1 << right << "|" << setw(6) << time2 << right  << "|" << setw(6) << time3 << right<< "|" << endl;
        cout << "----------------------" << endl;
    }
    else if ((time1 <= time3)&&(time3 <= time2)){
        cout << "----------------------" << endl;
        cout << setw(6) << name1 << right << "|" << setw(6) << name3 << right  << "|" << setw(6) << name2 << right<< "|" << endl;
        cout << "----------------------" << endl;
        cout << setw(6) << time1 << right << "|" << setw(6) << time3 << right  << "|" << setw(6) << time2 << right<< "|" << endl;
        cout << "----------------------" << endl;
    }
    else if ((time2 <= time1)&&(time1 <= time3)){
        cout << "----------------------" << endl;
        cout << setw(6) << name2 << right << "|" << setw(6) << name1 << right  << "|" << setw(6) << name3 << right<< "|" << endl;
        cout << "----------------------" << endl;
        cout << setw(6) << time2 << right << "|" << setw(6) << time1 << right  << "|" << setw(6) << time3 << right<< "|" << endl;
        cout << "----------------------" << endl;
    }
    else if ((time2 <= time3)&&(time3 <= time1)){
        cout << "----------------------" << endl;
        cout << setw(6) << name2 << right << "|" << setw(6) << name3 << right  << "|" << setw(6) << name1 << right<< "|" << endl;
        cout << "----------------------" << endl;
        cout << setw(6) << time2 << right << "|" << setw(6) << time3 << right  << "|" << setw(6) << time1 << right<< "|" << endl;
        cout << "----------------------" << endl;
    }
    else if ((time3 <= time1)&&(time1 <= time2)){
        cout << "----------------------" << endl;
        cout << setw(6) << name3 << right << "|" << setw(6) << name1 << right  << "|" << setw(6) << name2 << right<< "|" << endl;
        cout << "----------------------" << endl;
        cout << setw(6) << time3 << right << "|" << setw(6) << time1 << right  << "|" << setw(6) << time2 << right<< "|" << endl;
        cout << "----------------------" << endl;
    }
    else if ((time3 <= time2)&&(time2 <= time1)){
        cout << "----------------------" << endl;
        cout << setw(6) << name3 << right << "|" << setw(6) << name2 << right  << "|" << setw(6) << name1 << right<< "|" << endl;
        cout << "----------------------" << endl;
        cout << setw(6) << time3 << right << "|" << setw(6) << time2 << right  << "|" << setw(6) << time1 << right<< "|" << endl;
        cout << "----------------------" << endl;
    }

    return;
}



void Gymnastics(){
    
    string name;
    string winnername;
    int competitors;
    int total = 0;
    int score[5]={};
    float winnerScore=0.0;
    float average;
    
    cout << "please enter the number of competitors in the competition:" << endl;
    cin >> competitors;
    while ( (competitors < 0) || (competitors > 20)) {
        cout << "please enter the number that is positive and less than 20:" << endl;
        cin >> competitors;
    }
    
    for (int i = 0; i < competitors; i++){
        total = 0;
        cout << "please enter the name of the gymnast:" << endl;
        cin >> name;
        cout << "please enter the five score that the judge gave:" << endl;
        cin >> score[0] >>score[1] >>score[2] >>score[3] >>score[4];
        sort(score,score+5);
        score[0] = 0;
        score[4] = 0;
        
        for (int j = 1; j<4 ; j++){
            total = total + score[j];
        }
        average = total/3;
        setprecision(2);
        cout << name << ":  " << average << endl;
        if (average > winnerScore){
            winnerScore = average;
            winnername = name;
        }
    }
    setprecision(2);
    cout << "the winner is " << winnername << ": " << winnerScore << endl;
    
    return;
}



int main(){
    
    bool condition = true;
    int choice;
    
    cout << "Welcome!" << endl;
    do{
        MenuDisaplay();
        cin >> choice;
        while (Validation(choice)==false){
            cout << "please enter a valid number" << endl;
            MenuDisaplay();
            cin >> choice;
            Validation(choice);
        }
        
        if (choice == 1){
            Race();
        }
        else if (choice == 2){
            Gymnastics();
        }
        else{
            cout << "good bye!" << endl;
            condition = false;
        }
        
    }
    while (condition == true);
    
    
    return 0;
}
