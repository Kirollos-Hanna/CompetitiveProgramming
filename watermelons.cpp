#include <iostream>

using namespace std;

bool isEven(int num){
  return num % 2 == 0 && num > 3;
}

int main()
{
  int n;
  cin >> n;
  if(isEven(n)){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}