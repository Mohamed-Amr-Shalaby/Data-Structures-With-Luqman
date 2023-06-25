using namespace std;
#include <iostream>
int res;
char op;
class numbers
{

public:
int num1,num2;

void addition(){
    res = num1+num2;
    cout << "Result is: " << res;
}
void subtraction(){
    res = num1-num2;
    cout << "Result is: " << res;
}
void multiplication(){
    res = num1*num2;
    cout << "Result is: " << res;
}
void division(){
    res = num1/num2;
    cout << "Result is: " << res;    
}


};

char request_operator();
numbers nums;
int main(){
    
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
        nums.addition();
    }
    else if (op == '-'){
        nums.subtraction();
    }
    else if (op == '*'){
        nums.multiplication();
    }
    else if (op == '/'){
        nums.division();
    }
    else {
        request_operator();
    }
    return op;
}
