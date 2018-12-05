#include <iostream>
using namespace std;
int main() {
  int num ;
  string password ;
  cout << "請輸入一個密碼:" ;
  cin >> password;
  int i=password.length() ;//表示i等於陣列總使用位數
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
    //如果輸入的內容為符號,則不做任何改動
    password[j] = password[j] + number_add ;
    //將非符號的字元遞移
    if (password[j] > 'Z' || password[j] < 'a' && password[j] > 'z' )
    {
      password[j] = password[j]-26 ;
    }
    //如果字元超過Z(z)則回到A(a)繼續
    cout << password[j] ;
  }
}
