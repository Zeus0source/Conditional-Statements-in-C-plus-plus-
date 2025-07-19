//Yash Rastogi Exp-5
//24070123135
#include<iostream>
using namespace std;
int main()
{
    int num;float a,b,sum,sub,mul,Div;
    cout<< "Enter the first number : ";
    cin >>a;
    cout<< "Enter the Second number : ";
    cin >>b;
    cout << "Select the operation to perform: 1 .Addition 2.Subtraction 3.Multiplication 4.Divition : ";
    cin >>num;
    switch(num){
        case 1:
        sum=a+b;
        cout << "The sum is : "<<sum<<endl;
        break;
        case 2:
        sub=a-b;
        cout << "The subtraction is: "<<sub<<endl;
        break;
        case 3:
        mul=a*b;
        cout << "The Multiplication is: "<<mul<<endl;
        break;
        case 4:
        Div=a/b;
        cout << "The Divition is: "<<Div<<endl;
        break;
        default:
        cout <<"Invalid input , please select values from 1 to 4";
    }
}
/*
Output:
Enter the first number : 45
Enter the Second number : 90
Select the operation to perform: 1 .Addition 2.Subtraction 3.Multiplication 4.Divition : 3
The Multiplication is: 4050

Enter the first number : 2345
Enter the Second number : 64534
Select the operation to perform: 1 .Addition 2.Subtraction 3.Multiplication 4.Divition : 4
The Divition is: 0.0363374

Enter the first number : 435453
Enter the Second number : 654654
Select the operation to perform: 1 .Addition 2.Subtraction 3.Multiplication 4.Divition : 1
The sum is : 1.09011e+06

Enter the first number : 98087
Enter the Second number : 6783
Select the operation to perform: 1 .Addition 2.Subtraction 3.Multiplication 4.Divition : 2
The subtraction is: 91304
*/