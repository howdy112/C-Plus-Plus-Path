#include <iostream>
#include <cmath>
using namespace std;
double getNum1();
double getNum2();
int getOP();
double Math(int num1,int num2,char OP);
int main(){
        cout<<Math(getNum1(),getNum2(),getOP());
     return 0;
}
double getNum1(){
    double num1;
    cout<<"Please enter your first number: ";
    cin>>num1;
    return num1;
}
double getNum2(){
    double num2;
    cout<<"Please enter your second number: ";
    cin>>num2;
    return num2;
}
int getOP(){
    char OP;
    cout<<"Please enter your operator: ";
    cin>>OP;
    return OP;
}
double Math(int num1,int num2,char OP){
    int result;
    if (OP == '+' || OP == '-' || OP == '*' || OP == '/' || OP == '^' ){
    switch(OP){
    case '+':
       result = num1 + num2;
        break;
    case '-':
        result =num1 - num2;
        break;
    case '*':
         result =num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '^':
      result = pow(num1,num2);
        break;
    }
    }else{
        cout<<"Invalid Operator";
    }
    return result;
}
