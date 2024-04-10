#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;
    
    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Calculate the sum of the two numbers
    int total = num1 + num2;
    
    // Display the result
    cout << "The total is: " << total << endl;
    
    return 0;
}