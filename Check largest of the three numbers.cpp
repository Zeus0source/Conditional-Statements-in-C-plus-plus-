//Yash Rastogi Exp-5
//24070123135
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter three numbers: ";
    cin>>a;
    cin>>b;
    cin>>c;
    int num = a;
    if(b > num)
        num = b;
    if(c > num)
        num = c;
    cout << "The largest number is " << num << endl;
}
/*
Output:
Enter three numbers: 4
6
23
*/
