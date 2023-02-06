#include <iostream>
#include <string>


using namespace std;


int main(){
    
    const int NUM_STUDENTS = 4;
    string name[NUM_STUDENTS];
    int test[NUM_STUDENTS];
    char grade[NUM_STUDENTS];
    float avg;
    int highIndex = 0;
    int lowIndex = 0;
    int total = 0;
    
    for(int i = 0; i < NUM_STUDENTS; i++){
        
        cout << "Enter the student's name and press enter \n";
        getline(cin, name[i]);
        
        cout << "Enter the student's score for midterm and press enter \n";
        cin >> test[i];
        cin.ignore();
        
        total += test[i];
        
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
                    
        if(test[i] > test[highIndex]){
            highIndex = i;
        }
        
        if(test[i] < test[lowIndex]){
            lowIndex = i;
        }
        
    }
    
    avg = static_cast<float>(total) / NUM_STUDENTS;
    
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << name[i] << " , your test score is " << test[i] << " , your grade is " << grade[i] << endl;
                
        
    }

    cout << "\n\n The class average for this test is "<< avg << endl << endl;
    
    cout << name[highIndex] <<" has the highest test score = " << test[highIndex] << endl;
    
    cout << name[lowIndex] <<" has the lowest test score = " << test[lowIndex] << endl;
    
    system("pause");
    return 0;
}

