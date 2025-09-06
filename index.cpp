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
        total += marks; }
    
    
}