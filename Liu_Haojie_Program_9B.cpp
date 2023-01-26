#include <iostream>
#include <iomanip>

using namespace std;

void getStudentInfo(string &name, int &test1, int &test2, int &test3);
string getStudentName();
int getTestscore();
char assignGrade(int avg);
void displayResult(char grade, string name);


int main(){
    
    bool goAgain;
    char answer, answer2;
    int test1, test2, test3;
    int numTests = 3;
    float avg;
    string name;
    
    do{
        
        getStudentInfo(name, test1, test2, test3);
        
        cout << "Is " << name << " actively participating in the course? Answer Y or N. ";
        cin >> answer;

        
        
        avg = static_cast<float>(test1 + test2 + test3) / numTests;  // cast to a float for decimal

        cout << fixed << showpoint << setprecision(1);
        cout << endl << endl<< name << "'s average = " << avg << endl;
        
        char grade = assignGrade(avg);
        
        displayResult(grade,name);
        
        cout << "would you like to use this again?" << endl;
        cin >> answer2;
        if (answer2 == 'Y' || answer2 == 'y')
            goAgain = true;
        else if (answer2 == 'N' || answer2 == 'n')
            goAgain = false;
        else
        {
            cout << "Input error. Program ending \n";  // we will learn more about error handling later
            exit (0);  //this is not good style, but it's acceptable for now
        }
    }
    while (goAgain == true);
        
    cout << "good Bye!" << endl;
    
    return 0;
}

char assignGrade(int avg){
    char grade;

    
    const float A_GRADE = 90.00;
    const float B_GRADE = 80.00;
    const float C_GRADE = 70.00;
    const float D_GRADE = 60.00;
    
    if ((avg >= A_GRADE))
    {
        grade = 'A';
        cout << "Congratulations! You are awesome. \n";
    }
    else if ((avg >= B_GRADE))
    {
        grade = 'B';
        cout << "Good job. You are brilliant. \n";
    }
    
    else if ((avg >= C_GRADE))
    {
        grade = 'C';
        cout << "Nice work. You did good on your work. \n";
    }
    
    else if ((avg >= D_GRADE))
    {
        grade = 'D';
        cout << "You need to work harder!. \n";
    }
    else
    {
        grade = 'F';
        cout << "You are failing the class, please work hard \n";

    cout << endl;
    }
    return grade;
}

void displayResult(char grade, string name){
    
    if (grade == 'A' || grade == 'B' || grade == 'C')  // check for withdrawn student or error
    {
        cout << name << ", you earned a grade of " << grade << " in the course. \n";
        cout << "Please see your counselor to register for next semester. \n\n\n";
    }
    
    else if (grade == 'D' || grade == 'F')  // check for withdrawn student or error
    {
        cout << name << ", you earned a grade of " << grade << " in the course. \n";
        cout << "You must retake the course before registering for advanced courses. \n\n\n";
    }
    
    return;
}



void getStudentInfo(string &name, int &test1, int &test2, int &test3){
    
    name = getStudentName();
    cout << "Please enter the student's first score: " << endl;
    test1 = getTestscore();
    cout << "Please enter the student's second score: " << endl;
    test2 = getTestscore();
    cout << "Please enter the student's third score: " << endl;
    test3 = getTestscore();
    
    return;
}


string getStudentName(){
    
    string name;
    cout << "Please enter the student name: " << endl;
    cin >> name;
    
    return name;
}

int getTestscore(){
    
    int score;
    cin >> score;
    
    return score;
}
