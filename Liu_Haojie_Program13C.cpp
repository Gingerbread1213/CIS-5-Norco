#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int NUM_STUDENTS = 3;
const int NUM_TESTS= 5;

void getName(string name[], int i);
void getScore(int i, int j, int score[][NUM_TESTS]);
void assignGrade(float avg[], char grade[], int i);
void disaplayResult (string name[], int score[][NUM_TESTS], char grade[], int highIndex[], int lowIndex[], float avg[]);
float calcAvg(float avg[], int total[], int i, int score[][NUM_TESTS], int highIndex[], int lowIndex[]);
int findLow(int score[][NUM_TESTS], int i, int j, int lowIndex[]);
int findHigh(int score[][NUM_TESTS], int i, int j, int highIndex[]);


int main(){
    
    int score[NUM_STUDENTS][NUM_TESTS];
    string name[NUM_STUDENTS];
    char grade[NUM_STUDENTS];
    int total[NUM_STUDENTS]={0,0,0};
    float avg[NUM_STUDENTS]={0,0,0};
    int lowIndex[NUM_STUDENTS] = {0,0,0};
    int highIndex[NUM_STUDENTS] = {0,0,0};
    
    for (int i = 0; i < NUM_STUDENTS; i++){
        getName(name,i);
        
        for (int j = 0; j < NUM_TESTS; j++){
            getScore(i,j,score);
            total[i] = total[i] + score[i][j];
            lowIndex[i] = findLow(score, i, j, lowIndex);
            highIndex[i] = findHigh(score, i, j, highIndex);
            
        }
        
        avg[i] = calcAvg(avg, total, i, score, highIndex, lowIndex);
        assignGrade(avg, grade, i);
        cout << "This is Low" << score[i][lowIndex[i]]<< endl;
        cout << "This is high" << score[i][highIndex[i]]<< endl;
    }

    
    disaplayResult(name, score, grade, highIndex, lowIndex, avg);
    cout <<"\n"<<total[0]<<total[1]<<total[2];
    
    return 0;
}
void getName(string name[], int i){
    
    cout << "Enter the student's name and press enter \n";
    getline(cin, name[i]);
    
    return;
}

void getScore(int i, int j, int score[][NUM_TESTS]){
    
    cout << "Enter the student's five scores for midterm seperately and press enter \n";
    cin >> score[i][j];
    cin.ignore();
        
    return;
}


void assignGrade(float avg[], char grade[], int i){
    
    if (avg[i] >= 90){
        grade[i] = 'A';
    }
    else if (avg[i] >= 80){
        grade[i] = 'B';
    }
    else if (avg[i] >= 70){
        grade[i] = 'C';
    }
    else if (avg[i] >= 60){
        grade[i] = 'D';
    }
    else {
        grade[i] = 'F';
    }
    return;
}

float calcAvg(float avg[], int total[], int i, int score[][NUM_TESTS], int highIndex[], int lowIndex[]){
    avg[i] = static_cast<float>(total[i]) - score[i][lowIndex[i]] - score[i][highIndex[i]];
    avg[i] = avg[i]/3;
    return avg[i];
}

int findLow(int score[][NUM_TESTS], int i, int j, int lowIndex[]){
    
    if (score[i][j] < score[i][lowIndex[i]]){
        return j;
    }
    
    return lowIndex[i];
}

int findHigh(int score[][NUM_TESTS], int i, int j, int highIndex[]){
    
    if (score[i][j] > score[i][highIndex[i]]){
        return j;
    }
    
    return highIndex[i];
}

void disaplayResult (string name[], int score[][NUM_TESTS], char grade[], int highIndex[], int lowIndex[], float avg[]){
    
    cout << left << setw(6) <<"Name" << left << setw(15) <<"|"<<"Score"<< left << setw(5) <<"|"<<"Average"<< left << setw(5) <<"|"<<"Max"<< left << setw(5)<<"|"<<"Min"<< left << setw(6) <<"|"<<"grade"<<"|"<<endl;
    cout <<"--------------------------------------------------------------------"<< endl;
    
    for (int i = 0; i < NUM_STUDENTS; i++){
        cout <<left << setw(6) << name[i] << "|";
        
        for (int j = 0; j < NUM_TESTS; j++){
            cout <<left << setw(3) << score[i][j] << "|";
        }
        cout << left << setw(8) << setprecision(3) <<avg[i] << right << setw(5) <<"|"<< score[i][highIndex[i]] << right << setw(5) <<"|"<< score[i][lowIndex[i]] << right << setw(6) <<"|" << grade[i]<< "        |" <<endl;
        cout <<"--------------------------------------------------------------------"<< endl;
    }

    
    return;
}
