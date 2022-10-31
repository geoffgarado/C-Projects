#include <iostream>
#include <string>

using namespace std;

int bal;

class items{
  public:
    string brand, company, flavor, size;
    int price, expiration;
    
    void SelectDrink(){
      int y;
      int retail;
      cout << "\n\tWould you like to select [1]Coca-Cola, [2]C2, [3]Royal? : ";
      cin >> y;
      if (y == 1) {
        items coke;
        coke.company = "Coca-Cola Company";
        coke.brand = "Coke";
        coke.flavor = "Original";
        coke.size = "Regular";
        coke.price = 15;
        coke.expiration = 2023;
        cout << "\nCompany : " << coke.company << endl;
        cout << "Brand : " << coke.brand << endl;
        cout << "Flavor : " << coke.flavor << endl;
        cout << "Size : " << coke.size << endl;
        cout << "Price : PHP " << coke.price << endl;
        cout << "Expiration Year : "<< coke.expiration << endl;
        cout << "\n\nHow much would you like to buy? : ";
        cin >> retail;
        int total = retail * coke.price;
        if (total > bal) {
          cout << "Please do not buy more than your balance!" << endl;
          SelectDrink();
      } else {
        cout << "\n\tCalculating new balance...." << endl;
        bal = bal - total;
        cout << "\n\tNew balance : PHP " << bal;
      }
    } else if (y == 2){
      items URC;
      URC.company = "Universal Robina Corporation";
      URC.brand = "C2";
      URC.flavor = "Green Tea";
      URC.size = "Large";
      URC.price = 45;
      URC.expiration = 2023;
      cout << "\nCompany : " << URC.company << endl;
      cout << "Brand : " << URC.brand << endl;
      cout << "Flavor : " << URC.flavor << endl;
      cout << "Size : " << URC.size << endl;
      cout << "Price : PHP " << URC.price << endl;
      cout << "Expiration Year : " << URC.expiration << endl;
      cout << "\n\nHow much would you like to buy? : ";
      cin >> retail;
      int total = retail * URC.price;
      if (total > bal) {
        cout << "Please do not buy more than your balance!" << endl;
        SelectDrink();
      } else {
        cout << "\n\tCalculating new balance...." << endl;
        bal = bal - total;
        cout << "\n\tNew balance : PHP " << bal;
      }
    } else if (y == 3) {
      items royal;
      royal.company = "Coca-Cola";
      royal.brand = "Royal";
      royal.flavor = "Orange";
      royal.size = "Regular";
      royal.price = 15;
      royal.expiration = 2023;
      cout << "\nCompany : " << royal.company << endl;
      cout << "Brand : " << royal.brand << endl;
      cout << "Flavor : " << royal.flavor << endl;
      cout << "Size : " << royal.size << endl;
      cout << "Price : " << royal.price << endl;
      cout << "Expiration Year : " << royal.expiration << endl;
      cout << "\n\nHow much would you like to buy? : ";
      cin >> retail;
      int total = retail * royal.price;
      if (total > bal) {
        cout << "Please do not buy more than your balance!" << endl;
        SelectDrink();
      } else {
        cout << "\n\tCalculating new balance...." << endl;
        bal = bal - total;
        cout << "\n\tNew balance : PHP " << bal;
      }
    } else {
      cout << "tGoodbye.........";
      abort();
    }
  }
      void SelectFood(){
        int y;
        int retail;
        cout << "\n\tWould you like to select [1]Corned Tuna, [2]Corn Beef, [3]Pancit Canton : ";
        cin >> y;
        if (y == 1) {
          items tuna;
          tuna.company = "CDO Food Corporation";
          tuna.brand = "San Marino";
          tuna.flavor = "Spicy";
          tuna.size = "Regular";
          tuna.price = 35;
          tuna.expiration = 2025;
          cout << "\nCompany : " << tuna.company << endl;
          cout << "Brand : " << tuna.brand << endl;
          cout << "Flavor : " << tuna.flavor << endl;
          cout << "Size : " << tuna.size << endl;
          cout << "Price : PHP " << tuna.price << endl;
          cout << "Expiration Year : "<< tuna.expiration << endl;
          cout << "\n\nHow much would you like to buy? : ";
          cin >> retail;
          int total = retail * tuna.price;
          if (total > bal) {
            cout << "Please do not buy more than your balance!" << endl;
            SelectFood();
        } else {
          cout << "\n\tCalculating new balance...." << endl;
          bal = bal - total;
          cout << "\n\tNew balance : PHP " << bal;
        }
      } else if (y == 2){
        items corn_beef; // Must be corned beef
        corn_beef.company = "Pure Foods";
        corn_beef.brand = "Corned Beef";
        corn_beef.flavor = "Beef";
        corn_beef.size = "Regular";
        corn_beef.price = 35;
        corn_beef.expiration = 2025;
        cout << "\nCompany : " << corn_beef.company << endl;
        cout << "Brand : " << corn_beef.brand << endl;
        cout << "Flavor : " << corn_beef.flavor << endl;
        cout << "Size : " << corn_beef.size << endl;
        cout << "Price : PHP " << corn_beef.price << endl;
        cout << "Expiration Year : " << corn_beef.expiration << endl;
        cout << "\n\nHow much would you like to buy? : ";
        cin >> retail;
        int total = retail * corn_beef.price;
        if (total > bal) {
          cout << "Please do not buy more than your balance!" << endl;
          SelectFood();
        } else {
          cout << "\n\tCalculating new balance...." << endl;
          bal = bal - total;
          cout << "\n\tNew balance : PHP " << bal;
        }
      } else if (y == 3) {
        items canton; // must be pancit canton
        canton.company = "Nissin";
        canton.brand = "Pancit Canton / Lucky Me";
        canton.flavor = "Chilimansi";
        canton.size = "Regular";
        canton.price = 25;
        canton.expiration = 2024;
        cout << "\nCompany : " << canton.company << endl;
        cout << "Brand : " << canton.brand << endl;
        cout << "Flavor : " << canton.flavor << endl;
        cout << "Size : " << canton.size << endl;
        cout << "Price : " << canton.price << endl;
        cout << "Expiration Year : " << canton.expiration << endl;
        cout << "\n\nHow much would you like to buy? : ";
        cin >> retail;
        int total = retail * canton.price;
        if (total > bal) {
          cout << "Please do not buy more than your balance!" << endl;
          SelectDrink();
        } else {
          cout << "\n\tCalculating new balance...." << endl;
          bal = bal - total;
          cout << "\n\tNew balance : PHP " << bal;
        }
      } else {
        cout << "tGoodbye.........";
        abort();
      }
    }
};


void balance(){
  cout << "\nChecking Balance......";
  cout << "\nYour current balance is : PHP " << bal;
}

void cashIN(){
  int in;
  cout << "\nHow much would you like to cash-in? : ";
  cin >> in;
  bal = bal + in;
  cout << "\n\tYour new balance is : PHP " << bal;
}

void store(){
  int dec;
  cout << "\n\t\t\tWelcome to Shitty Store!\n";
  cout << "Would you like to buy [1]Drinks, [2] Food, [3]Electronic Components, or [4]Go back? : ";
  cin >> dec;
  if (dec == 1) {
    items drinker;
    drinker.SelectDrink();
  } else if (dec == 2){
    items foodie;
    foodie.SelectFood();
  } else if (dec == 3){
    cout << "\n\tComing soon.....";
  } else if (dec == 4) {
    cout << "\n";
  } else {
    store();
  }
}



void welcome(){
  int dec;
  int retry;
  cout << "\t\tWelcome to Shitty Budgeting" << endl;
  cout << "\nWould you like to [1]Check Balance, [2]Cash-In, [3]Continue to Store, [4]Exit? : ";
  cin >> dec;
  if (dec == 1) {
    // Balance function
    balance();
    cout << "\n\nWould you like to to go back? [1]yes or [2]no: ";
    cin >> retry;
    if (retry == 1) {
      welcome();
    } else {
      cout << "\t\tGoodbye............";
      abort();
    }
  } else if (dec == 2) {
    // Cash-In function   
    cashIN();
    cout << "\n\nWould you like to to go back? [1]yes or [2]no: ";
    cin >> retry;
    if (retry == 1) {
      welcome();
    } else {
      cout << "\t\tGoodbye............";
      abort();
    }
  } else if (dec == 3) {
    store();
    cout << "\n\nWould you like to to go back? [1]yes or [2]no: ";
    cin >> retry;
    if (retry == 1) {
      welcome();
    } else {
      cout << "\t\tGoodbye............";
      abort();
    }

  } else if (dec == 4) {
    cout << "Aborting.....";
    abort();
  }
}

int main(){
  cout << "Please input your current money : PHP ";
  cin >> bal;
  welcome();
  return 0;
}
