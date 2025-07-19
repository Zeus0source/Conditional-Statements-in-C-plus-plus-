//Yash Rastogi Exp-5
//24070123135
#include<iostream>
using namespace std;
int main()
{
  char str;
  cout << "Enter a Character : ";
  cin >> str;
  if (str=='a' || str=='e' || str=='i' || str=='o' || str=='u'|| str=='A' || str=='E' || str=='I'||str=='O'|| str=='U')
  {
    cout << "The Character entered is a Vowel";
  }
  else {
    cout << "The Character entered is a Consonant";
  }
}
/*
Output:
Enter a Character : q
The Character entered is a Consonant
Enter a Character : a
The Character entered is a Vowel
*/