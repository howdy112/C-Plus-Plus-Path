#include <iostream>
#include <cmath>

using namespace std;
int getNum1();
int getNum2();
char getOP();
double Math(int num1,int num2,char op);
int main(){
        int finalSolve = Math(getNum1(),getNum2(),getOP());
        if (finalSolve == 9999){
            cout<<"Invalid Operator, please enter in a new operator.";
        }else{
            cout<<finalSolve;
        }
     return 0;
}
int getNum1(){
    int num1;
    cout<<"Please enter your first number: ";
    cin >> num1;
    return num1;
}
int getNum2(){
    int num2;
    cout<<"Please enter your second number: ";
    cin >> num2;
    return num2;
}
char getOP(){
    char op;
    cout<<"Please enter your operator: ";
    cin >> op;
    return op;
}
double Math(int num1,int num2, char op){
int result;
if (op == '+'){
     result = num1 + num2;
}else if (op == '-'){
    result = num1 - num2;
}else if (op == '*'){
   result = num1 * num2;
}else if (op == '/'){
    result = num1 / num2;
}else {
    result = 9999;
}
    return result;
}