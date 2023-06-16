using namespace std;
#include <iostream>
int num1,num2,res;
char op;
void addition(int num1, int num2){
    res = num1+num2;
    cout << "Result is: " << res;
}
void subtraction(int num1, int num2){
    res = num1-num2;
    cout << "Result is: " << res;
}
void multiplication(int num1, int num2){
    res = num1*num2;
    cout << "Result is: " << res;
}
void division(int num1, int num2){
    res = num1/num2;
    cout << "Result is: " << res;    
}
char request_operator(){
    cout << "Please enter the corresponding arithmatic operator (+,-,*,/)" <<endl;
    cin >> op;
    if (op == '+'){
        addition(num1,num2);
    }
    else if (op == '-'){
        subtraction(num1,num2);
    }
    else if (op == '*'){
        multiplication(num1,num2);
    }
    else if (op == '/'){
        division(num1,num2);
    }
    else {
        request_operator();
    }
    return op;
}

int main(){

    cout << "Please enter the first number" << endl;
    cin >> num1;
    cout << "Please enter the second number" << endl;
    cin >> num2;
    request_operator();
    
}
