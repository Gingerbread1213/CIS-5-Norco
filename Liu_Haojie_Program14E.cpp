#include <iostream>
#include <iomanip>

using namespace std;


const int NUM_TEST = 5;
const int NUM_STUDENTS = 4;


struct Student{
    
    string name;
    int ID;
    int score[NUM_TEST];
    float average;
    char grade;
    
};

int getHigh(Student &p);
int getLow(Student &p);
void getStudentInfo(Student &p);
void calcAvg(Student &p, float &a);
void assignGrade(Student &p);
void displayResult(Student &p);
int getHighAvg(float p[], int &x);

int main(){
    
    
    
    Student CIS5[NUM_STUDENTS];
    float avg[NUM_STUDENTS];
    float classAverage = 0;
    float highAverage = 0;
    int index = 0;
    
    for (int i = 0; i < NUM_STUDENTS; i++){
        cout << "Please enter the following information: " << endl;
        getStudentInfo(CIS5[i]);
        calcAvg(CIS5[i],avg[i]);
        assignGrade(CIS5[i]);
        
        for (int j = 0; j < NUM_STUDENTS; j++){
            classAverage = classAverage + avg[j];
        }
        

    }
    
    cout << left << setw(6) <<"Name" << left << setw(15) <<"|"<<"Score"<< left << setw(5) <<"|"<<"Average"<< left << setw(6) <<"|"<<"grade"<<"|"<<endl;
    cout <<"--------------------------------------------------------------------"<< endl;
    
    for (int i = 0; i < NUM_STUDENTS; i++){
        displayResult(CIS5[i]);
    }
    
    cout << endl;
    cout << "classAverage: " << classAverage/NUM_STUDENTS << endl;
    
    
    //Bonus:
    
    highAverage = getHighAvg(avg, index);
    cout << "Class Highest Average: " << highAverage << endl;
    cout << "Name: " << CIS5[index].name << endl;
    cout << "Student ID: " << CIS5[index].ID << endl;
    
    return 0;
}

void getStudentInfo(Student &p){
    
    cout << "Name: ";
    cin >> p.name;
    cout << "Student ID: ";
    cin >> p.ID;
    cout << "score of the five tests: ";
    for (int i = 0; i < NUM_TEST; i++){
        cin >> p.score[i];
    }
    
    return;
}

int getHigh(Student &p){
    
    int high = p.score[0];
    
    for (int i = 0;  i < NUM_TEST; i++){
        if(high < p.score[i]){
            high = p.score[i];
        }
    }
    return high;
}

int getHighAvg(float p[], int &x){
    int high = p[0];
    
    for (int i = 0;  i < NUM_TEST; i++){
        if(high < p[i]){
            high = p[i];
            x = i;
        }
    }
    
    return high;
}

int getLow(Student &p){
    
    int low = p.score[0];
    
    for (int i = 0;  i < NUM_TEST; i++){
        if(low > p.score[i]){
            low = p.score[i];
        }
    }
    return low;
}

void calcAvg(Student &p, float &a){
    int total = 0;
    for (int i = 0; i < NUM_TEST; i++){
        total = total + p.score[i];
    }
    a = (total - getHigh(p) - getLow(p))/(NUM_TEST-2);
    p.average = a;
    
    return;
}

void assignGrade(Student &p){
    
    if (p.average >= 90){
        p.grade = 'A';
    }
    else if (p.average >= 80){
        p.grade = 'B';
    }
    else if (p.average >= 70){
        p.grade = 'C';
    }
    else if (p.average >= 60){
        p.grade = 'D';
    }
    else{
        p.grade = 'F';
    }
    
    return;
}

void displayResult(Student &p){
    
    cout << left << setw(6) << p.name << "|";
    for (int j = 0; j < NUM_TEST; j++){
        cout <<left << setw(3) << p.score[j] << "|";
    }
    cout << left << setw(8) << setprecision(3) << p.average << right << setw(6) <<"|" << p.grade<< "        |" <<endl;
    cout <<"--------------------------------------------------------------------"<< endl;
    
        
    return;
}
