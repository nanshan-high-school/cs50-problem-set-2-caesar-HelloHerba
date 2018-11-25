#include <iostream>
using namespace std;
int main() {
  int num ;
  string password ;
  cout << "請輸入一個密碼:" ;
  cin >> password;
  int i=password.length() ;
  cout << "\n請輸入要遞移的數字:" ;
  cin >> num;
  const int number_add = num ;
  cout<<"\n加密後的結果為:" ;
  for (int j=0 ; j<i ; j++)
  {
    if(password[j] < 'A'|| password[j] > 'Z' && password[j] < 'a' || password[j] > 'z')
    {
      cout << password[j] ;
      continue ;
    }
    password[j] = password[j] + number_add ;
    if (password[j] < 'a' && password[j] > 'Z' || password[j] > 'z' )
    {
      password[j] = password[j]-26 ;
    }
    cout << password[j] ;
  }
}
