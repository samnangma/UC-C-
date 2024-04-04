#include <iostream>
using namespace std;
int main() {
 	int number1;
 	int number2;
 	double total;
 	string myname;
 	
 	cout << "Please input Number1: ";
 	cin >> number1;
 	cout << "Input number 2: ";
 	cin >> number2;
 	
 	total = number1 + number2;
 	
 	cout << "Total : " << total;
 	
 	cout << "Input your Name: ";
 	cin >> myname;
 	cout << "Your name is: " << myname;
  return 0;
}