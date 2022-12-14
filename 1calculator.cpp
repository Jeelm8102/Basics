
#include <iostream>

using namespace std;

int main()
{
    float num1,num2,Result;
    int Operator;
    cout<<"Enter value of num1=";
    cin>>num1;
    cout<<"Enter value of num2=";
    cin>>num2;
    cout<<"Operators are : 1. Addition \n 2.Subtraction \n 3. Multiplication \n 4. Division \n Enter the Operation to be performed : ";
    cin>>Operator;
    switch (Operator)
    {
    case 1:
    Result=num1+num2;
    cout<<"Result : "<<Result,num1,num2;
        break;
    case 2:
    Result=num1-num2;
    cout<<"Result : "<<Result,num1,num2;
        break;    
    case 3:
    Result=num1*num2;
    cout<<"Result : "<<Result,num1,num2;
        break;
    case 4:
    if(num2 == 0){
        cout<<"Invalid Input";
        break;
    }
        Result=num1/num2;
        cout<<"Result : "<<Result,num1,num2;
        break;    
    default:
    cout<<"Invalid Input";
        break;
    }



}







