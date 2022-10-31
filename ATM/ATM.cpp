#include <iostream>
#include <string>

using namespace std;

string username[1] = {"gorb"};
string inp_user;
string inp_pin, gorb_pin = "09196";
int bal = 100;

void user_login(){
  cout << "Please enter your username: ";
  getline(cin, inp_user);
  if (inp_user == username[0]) {
    cout << "User found!";
  } else {
    cout << "Intruder Alert....";
    abort();
  }
}

void pin_login(){
  string retry;
  cout << "\nPlease enter your PIN: ";
  cin >> inp_pin;
  if (inp_pin == gorb_pin) {
    cout << "User verified!";
  } else {
    cout << "PIN not recognized\n\tWould you like to retry? [Y]yes or [N]no: ";
    cin >> retry;
    if (retry == "Y") {
      pin_login();
    } else {
      cout << "Goodbye....";
      abort();
    }
  }
}


void checkbal(){
  cout << "Your balance is: $" << bal;
  if (bal < 1000) {
    cout << "\nBro you broke as fuck, work harder for them bands.";
  } else {
    cout << "\n\tDamn bro rich as fuck.";
  }
}

void cashIn(){
  int cash;
  cout << "\nHow much would you like to Cash-In? : ";
  cin >> cash;
  bal = bal + cash;
  cout << "New balance: " << bal;
  if (cash > 500) {
    cout << "\nDamn bro sold drugs KEKW.";
  } else {
    cout << "\nBroke ass man.";
  }
}

void withDraw(){
  int draw;
  cout << "\nHow much would like to withdraw? : ";
  cin >> draw;
  if (draw < bal) {
    bal = bal - draw;
    cout << "\n\tSuccesfully withdrawn " << draw;
    cout << "\n\tNew Balance : " << bal;
  } else {
    cout << "\nBro you broke as fuck, don't withdraw more than your balance you dumbass.";
  }
}


void Welcome_Screen(){
  int decision;
  cout << "Would you like to [1]Check Balance, [2]Cash-In, or [3]Withdraw?" << endl;
  cin >> decision;
  if (decision == 1) {
    checkbal();
  } else if (decision == 2) {
    cashIn();
  } else if (decision == 3) {
    withDraw();
  } else {
    cout << "You a bitch";
  }
}

int main(){
  string y_n;
  cout << "\tWelcome to Shitty Bank!" << endl;
  user_login();
  pin_login();
  cout << "\n\tWelcome to back Mr. Gorb" << endl;
  Welcome_Screen();
  cout << "\nMain menu? [Y]Yes or [N]No : ";
  cin >> y_n;
  if (y_n == "Y") {
    Welcome_Screen();
  } else {
    abort();
  }
  
  cout << "\nMain menu? [Y]Yes or [N]No : ";
  cin >> y_n;
  if (y_n == "Y") {
    Welcome_Screen();
  } else {
    abort();
  }
  
  cout << "\nMain menu? [Y]Yes or [N]No : ";
  cin >> y_n;
  if (y_n == "Y") {
    Welcome_Screen();
  } else {
    abort();
  } 
  return 0;
}
