#include <iostream>
using namespace std;

int main() {
 // TODO: Declare necessary variables
    double number1; 
    double number2; 
    string operation;

    // TODO: Prompt user for input
    cout << "Enter the first number: "; cin>> number1; 
    cout << "Enter the second number: "; cin>> number2; 

    cout << "Enter the operation (+, -, *, /): "; cin >> operation;

    if (operation == "+"){
        cout << "Result: " << number1 + number2 << endl;
    } else if (operation == "-") {
        cout << "Result: " << number1 - number2 << endl;
    } else if (operation == "*"){
        cout << "Result: " << number1 * number2 << endl;
    }else if (operation == "/"){
        cout << "Result: " << number1 / number2 << endl;
    }

    }

    // TODO: Implement logic to perform the arithmetic operation based on user input

    // TODO: Display the result

    // Bonus 1: Display error messsage if the user tries to divide by 0. 
    // (hint: you can add 'return 0;' at places in your code to end the program early)
    // Bonus 2: Display error messsage if the user types in a symbol that is not one of (+, -, *, /)
    // Bonus 3: Put your code in a loop so the user can keep using the calculator



