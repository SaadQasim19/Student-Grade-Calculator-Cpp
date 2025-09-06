#include <iostream>
using namespace std;

int main() {
    float marks, total = 0, average;
    int subjects;
    
   cout << "Enter the number of subjects: ";
    cin >> subjects;
    
    for(int i = 1; i <= subjects; i++) {
        cout << "Enter marks for Subject " << i << ": ";
        cin >> marks;
        total += marks; 
    }

     average = total / subjects;
   
    cout << "\n--- Results ---" << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
    
     cout << "Grade: ";
    if(average >= 90) {
        cout << "A+ (Excellent!)";
    }
    else if(average >= 80) {
        cout << "A (Very Good)";
    }
    else if(average >= 70) {
        cout << "B (Good)";
    }
    else if(average >= 60) {
        cout << "C (Fair)";
    }
    else {
        cout << "F (Fail)";
    }
    
    return 0;
}