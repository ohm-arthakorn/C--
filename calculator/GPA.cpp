#include <iostream>
using namespace std;


int main(){

    // start with 3 subject >> Physics, Calculus, Circuit
    float CreditPhys = 3;
    float CreditCal = 3;
    float CreditCircuit = 3;
    float GradeCal, GradePhys, GradeCircuit;

    // Total Credit for calculating GPA
    float TotalCredits = CreditCal+CreditPhys+CreditCircuit;
    // Calculating GPA parts
    float GPA;
    
    
    cout << "Input your grade Calculus : ";
    cin >> GradeCal;
    cout << "Input your grade Physics : ";
    cin >> GradePhys;
    cout << "Input your grade Circuit : ";
    cin >> GradeCircuit;

    GPA = (GradeCal+GradeCircuit+GradePhys)/TotalCredits;
    cout << "Your GPA is : " << GPA;

    
    
}