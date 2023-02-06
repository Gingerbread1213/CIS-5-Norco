#include <iostream>
#include <string>


using namespace std;

void getInput(int test[], string name[], int i);
void assignGrade(int test[], char grade[], int i);
void disaplayResult(const int NUM_STUDENTS, string name[], int test[], char grade[], int highIndex, int lowIndex, float avg);
float calcAvg(float avg, int total, const int NUM_STUDENTS);
int findHi(int test[], int i , int highIndex);
int findLow(int test[], int i , int lowIndex);

int main(){

    const int NUM_STUDENTS = 4;
    string name[NUM_STUDENTS];
    int test[NUM_STUDENTS];
    char grade[NUM_STUDENTS];
    float avg = 0;
    int highIndex = 0;
    int lowIndex = 0;
    int total = 0;
    

    
    for(int i = 0; i < NUM_STUDENTS; i++){
        
        getInput(test, name, i);
        
        total += test[i];
        
        assignGrade(test, grade, i);
                    
        highIndex = findHi(test, i, highIndex);
        
        lowIndex = findLow(test, i, lowIndex);
        
    }
    
    avg = calcAvg(avg, total, NUM_STUDENTS);
    
    disaplayResult(NUM_STUDENTS, name, test, grade, highIndex, lowIndex, avg);
    
    system("pause");
    return 0;
}


void getInput(int test[], string name[], int i){
    
    cout << "Enter the student's name and press enter \n";
    getline(cin, name[i]);
    
    cout << "Enter the student's score for midterm and press enter \n";
    cin >> test[i];
    cin.ignore();
    
    
    return;
}

void assignGrade(int test[], char grade[], int i){
    
    if (test[i] >= 90){
        grade[i] = 'A';
    }
    else if (test[i] >= 80){
        grade[i] = 'B';
    }
    else if (test[i] >= 70){
        grade[i] = 'C';
    }
    else if (test[i] >= 60){
        grade[i] = 'D';
    }
    else {
        grade[i] = 'F';
    }
    
    
    return;
}

float calcAvg(float avg, int total, const int NUM_STUDENTS){
    
    avg = static_cast<float>(total) / NUM_STUDENTS;
    
    return avg;
}


int findHi(int test[], int i , int highIndex){
    
    if(test[i] > test[highIndex]){
        return i;
    }
    
    return highIndex;
}



int findLow(int test[], int i , int lowIndex){
    
    if(test[i] < test[lowIndex]){
        return i;
    }
    
    return lowIndex;
}

void disaplayResult(const int NUM_STUDENTS, string name[], int test[], char grade[], int highIndex, int lowIndex, float avg){
    
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << name[i] << " , your test score is " << test[i] << " , your grade is " << grade[i] << endl;
                
        
    }

    cout << "\n\n The class average for this test is "<< avg << endl << endl;
    
    cout << name[highIndex] <<" has the highest test score = " << test[highIndex] << endl;
    
    cout << name[lowIndex] <<" has the lowest test score = " << test[lowIndex] << endl;
    
    return;
}





