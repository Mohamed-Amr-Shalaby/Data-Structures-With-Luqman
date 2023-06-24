using namespace std;
#include <iostream>
int num1,num2,res;
char op;
class numbers
{

public:
int num1,num2;

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


}

char request_operator();

int main(){
    numbers nums;
    cout << "Please enter the first number" << endl;
    cin >> nums.num1;
    cout << "Please enter the second number" << endl;
    cin >> nums.num2;
    request_operator();
    
}
char request_operator(){
    cout << "Please enter the corresponding arithmatic operator (+,-,*,/)" <<endl;
    cin >> op;
    if (op == '+'){
        nums.addition(num1,num2);
    }
    else if (op == '-'){
        nums.subtraction(num1,num2);
    }
    else if (op == '*'){
        nums.multiplication(num1,num2);
    }
    else if (op == '/'){
        nums.division(num1,num2);
    }
    else {
        request_operator();
    }
    return op;
}
