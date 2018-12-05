#include <iostream>
using namespace std;
const int number_add = 5 ;
int main() {
  int num ;
  string password ;
  cout << "請輸入一個密碼:" ;
  cin >> password;
  int i=password.length() ;//表示i等於陣列總使用位數
  cout<<"\n加密後的結果為:" ;
  for (int j=0 ; j<i ; j++)
  {
    if(password[j] < 'A'|| password[j] > 'Z' && password[j] < 'a' || password[j] > 'z')
    {
      cout << password[j] ;
      continue ;
    }//如果輸入的內容為符號,則不做任何改動
    password[j] = password[j] + number_add ;
     //將非符號的字元遞移
    if(password[j]-number_add >='a'&& password[j]+number_add>'z')
    {
        password[j]=password[j]-26;
    }else if (password[j]-number_add <'Z' && password[j] > 'Z' )
    {
      password[j] = password[j]-26 ;
    }
    //如果字元超過Z(z)則回到A(a)繼續
    cout << password[j] ;
  }
}
