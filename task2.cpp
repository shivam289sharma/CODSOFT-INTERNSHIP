#include<iostream>
using namespace std;


/* To Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform. */


int main(){
    double num1, num2, result;
    char op;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;

    cout<<"Enter the operation ('+' for Addition, '-' for Subtraction, '*' for Multiplication, '/' for Division)"<<endl;
    cin>>op;

    switch (op){
        case '+':
            result = num1 + num2;
            cout<<"Result: "<<result<<endl;
            break;
        case '-':
            result = num1 - num2;
            cout<<"Result: "<<result<<endl;
            break; 
        case '*':
            result = num1*num2;
            cout<<"Result: "<<result<<endl;
            break;
        case '/':
            if(num2!=0){
                result = num1/num2;
                cout<<"Result: "<<result<<endl;
            }
            else{
                cout<<"Error: Division by zero is invalid"<<endl;
            }
            break;
        default:
            cout<<"Error: Invalid operation."<<endl;
    }

    return 0;
    
}
