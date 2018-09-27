#include "std_lib_facilities.h"

int main()

{

cout << "Enter the name of the person you want to write to:\n";
string name;
cin >> name;
cout << "Dear " << name << ",\n" << "How are you? I am fine. I miss you. Have you watched the new Marvel movies already? If no, we gotta go to the cinema and watch them.\n";
cout << "Enter a friend's name:\n";
string friend_name;
cin >> friend_name;
cout << "Have you seen " << friend_name << " lately?\n";
char friend_sex;
cout << "Is " << friend_name << " A male or a female? (m/f)\n"; 
cin >> friend_sex;
if
(friend_sex == 'm') cout << "If you see " << friend_name << " please ask him to call me.\n";
if
(friend_sex == 'f') cout << "If you see " << friend_name << " please ask her to call me.\n";
cout << "How old are you?\n";
int age;
cin >> age;

if
(age <= 0 || age>=110) simple_error("you're kidding!");
else cout << "I hear you just had a birthday and you are " << age << " years old.\n";


if(age < 12) cout << "Next year you will be " << age + 1 << ".\n";
if(age == 17) cout << "Next year you will be able to vote.\n";
if(age > 70) cout << "I hope you are enjoying retirement.\n";
cout << "Yours sincerely, \n\nLoós Tamás\n";
}

