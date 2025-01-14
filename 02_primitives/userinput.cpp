#include<bits/stdc++.h>

using namespace std;

int main(){
  
  string userTea;
  int teaQuantity;
  cout << "would you like some tea? \n";
  getline(cin, userTea);

  // asjk for quantity
  cout << "how many cups of " << userTea << " would you like? \n";
  cin >> teaQuantity;

  cout << "you have ordered " << teaQuantity << " cups of " << userTea << endl;

  return 0;
} 