//Yash Rastogi Exp-5
//24070123135
#include<iostream>
using namespace std;
int main(){
    int num ; float amount,withdraw,deposit,loan,remain1,remain2,remain3;
    cout<<"Enter your current Bank Statement: ";
    cin>> amount;
    cout<<" Enter your choice 1.Withdraw 2.Deposit 3.Take Loan: ";
    cin>> num;
    switch(num){
        case 1:
        cout<<"Enter the amount of money to withdraw";
        cin>>withdraw;
        if(withdraw>amount){
            cout<<"Insufficient Balance";
        }
        remain1=amount-withdraw;
        cout<<"The Amount Remaining is: "<<remain1<<endl;
        break;
        case 2:
        cout<<"Enter the amount of money to Deposit";
        cin>>deposit;
        remain2=amount+deposit;
        cout<<"The Amount Remaining is: "<<remain2<<endl;
        break;
        case 3:
        cout<<"Enter the amount of loan to take(loan interest is 12%)";
        cin>>loan;
        remain3=loan+amount;
        cout<<"The Amount Remaining is: "<<remain3<<endl;
        break;
        default:
       cout<<"Invalid input!!";
    }
}