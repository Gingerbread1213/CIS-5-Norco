#include <iostream>
#include <cmath>

using namespace std;



int main(){
    
    int studentNum = 0;
    int Score = 0;
    int total = 0;
    int testNum = 0;
    
    const int GRADE_A = 90;
    const int GRADE_B = 80;
    const int GRADE_C = 70;
    const int GRADE_D = 60;
    
    string Name;
    string enter;
    
    bool cond = false;
    
    do{
        cout << "Welcome to the Grade Book program, Please enter the number of students (1 - 35) that is in your class:";
        cin >> studentNum;
        
        
        while ((studentNum > 35) || (studentNum < 1)){
            cout << "Invalid input, Please enter the number of students (1 - 35) that is in your class:";
            cin >> studentNum;
        }
        
        
        
        for (int i = 0; i < studentNum; i++){
            
            cout << "please input your student's name"<< endl;
            getline(cin,Name);
            cout << "please input the total number of tests(between 2 - 5)" << endl;
            cin >> testNum;
            
            while ((testNum > 5) || (testNum < 2)){
                cout << "Invalid input, please input the total number of tests(between 2 - 5)";
                cin >> testNum;
                
            }
            for (int j = 0; j < testNum; j++){
                
                cout << "Please enter the test score (0 - 100)"<<endl;
                cin >> Score;
                
                while ((Score > 100) || (Score < 0)){
                    cout << "Invalid input, please input the total number of tests(between 2 - 5)";
                    cin >> Score;
                }
                
                total = Score + total;
            }
            
            cout << "the total score for "<< Name << " is: " << total << endl;
            cout << "the Average score for " << Name << " is: " << total/testNum << endl;
            
            if ((total/testNum>=GRADE_A)){
                cout << Name << " is earning a A in this class"<< endl;
            }
            else if ((total/testNum>=GRADE_B)&&(total/testNum<=GRADE_A)){
                cout << Name << " is earning a B in this class"<< endl;
            }
            else if ((total/testNum>=GRADE_C)&&(total/testNum<=GRADE_B)){
                cout << Name << " is earning a C in this class"<< endl;
            }
            else if ((total/testNum>=GRADE_C)&&(total/testNum<=GRADE_D)){
                cout << Name << " is earning a D in this class"<< endl;
            }
            else {
                cout << Name << " is earning a F in this class"<< endl;
            }
        }
        cout << "Would you like to restart this program? Enter(Y/y) if yes, else please enter anything as your input:" << endl;
        cin >> enter;
        
        if ((enter == "Y") || (enter == "y")){
            cond = true;
        }
    }
    while(cond == true);
    
    cout << "Thank you! good bye!" << endl;
    return 0;
}
