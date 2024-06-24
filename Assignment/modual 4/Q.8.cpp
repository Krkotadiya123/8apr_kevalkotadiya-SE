//Write a program of Addition, Subtraction, Division, Multiplication using constructor. 
#include <iostream>
using namespace std;

class Calculator {

public:   
 	int a, b;
 	Calculator(int x,int y):a(x),b(y)
	 {
}
    int add() {
        return a + b;
    }

     int sub() {
	return a - b;
    }

    int  div(){
	 
        return a * b;
    }

     int mul() {
        
        
        return a / b;
    }
};

int main() {
    int x, y;

    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
     Calculator cl(x,y);

    cout << "Addition: " << cl.add() << "\n";
    cout << "Subtraction: " << cl.sub() << "\n";
    cout << "Multiplication: " << cl.mul() << "\n";
    cout << "Division: " << cl.div() << "\n";

}
