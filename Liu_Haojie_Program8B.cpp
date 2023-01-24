#include <iostream>
#include <iomanip>

using namespace std;

char assignGrade(int avg, bool isActive);
string getName();
void displayResult(char grade, string name);


int main(){
    
    bool isActive, goAgain;
    char answer, answer2;
    int test1, test2, test3;
    int numTests = 3;
    float avg;
    
    do{
        cout << "Enter the student name: ";
        string name = getName();
        
        cout << "Is " << name << " actively participating in the course? Answer Y or N. ";
        cin >> answer;

        if (answer == 'Y' || answer == 'y')
            isActive = true;
        else if (answer == 'N' || answer == 'n')
            isActive = false;
        else
        {
            cout << "Input error. Program ending \n";  // we will learn more about error handling later
            exit (0);  //this is not good style, but it's acceptable for now
        }
        cout << "Enter three test scores between 0 and 100: ";
        cin >> test1 >> test2 >> test3;
        avg = static_cast<float>(test1 + test2 + test3) / numTests;  // cast to a float for decimal

        cout << fixed << showpoint << setprecision(1);
        cout << endl << endl<< name << "'s average = " << avg << endl;
        
        char grade = assignGrade(avg,isActive);
        
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


string getName(){
    
    string name;
    
    getline(cin,name);
    
    return name;
}

char assignGrade(int avg, bool isActive){
    char grade;

    
    const float A_GRADE = 90.00;
    const float B_GRADE = 80.00;
    const float C_GRADE = 70.00;
    const float D_GRADE = 60.00;
    
    if ((avg >= A_GRADE) && (isActive == true))
    {
        grade = 'A';
        cout << "Congratulations! You are awesome. \n";
    }
    else if ((avg >= B_GRADE) && (isActive == true))
    {
        grade = 'B';
        cout << "Good job. You are brilliant. \n";
    }
    
    else if ((avg >= C_GRADE) && (isActive == true))
    {
        grade = 'C';
        cout << "Nice work. You did good on your work. \n";
    }
    
    else if ((avg >= D_GRADE) && (isActive == true))
    {
        grade = 'D';
        cout << "You need to work harder!. \n";
    }
    else if ((avg < D_GRADE) && (isActive == true))
    {
        grade = 'F';
        cout << "You are failing the class, please work hard \n";
    }
    
    else if (isActive == false)
    {
        grade = 'W';
        cout << "Student has been withdrawn from the course. \n";
    }
    else  // trailing else to catch errors
    {
        grade = 'X';
        cout << " INVALID LOGIC. CHECK YOUR CODE. \n";
    }
    cout << endl;
    
    return grade;
}

void displayResult(char grade, string name){
    
    if (grade != 'X' && grade != 'W' && (grade == 'A' || grade == 'B' || grade == 'C'))  // check for withdrawn student or error
    {
        cout << name << ", you earned a grade of " << grade << " in the course. \n";
        cout << "Please see your counselor to register for next semester. \n\n\n";
    }
    
    else if (grade != 'X' && grade != 'W' && (grade == 'D' || grade == 'F'))  // check for withdrawn student or error
    {
        cout << name << ", you earned a grade of " << grade << " in the course. \n";
        cout << "You must retake the course before registering for advanced courses. \n\n\n";
    }
    
    return;
}

