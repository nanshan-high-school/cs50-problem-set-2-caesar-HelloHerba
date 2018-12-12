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
    }//如果輸入的內容為符號,則不做任何改動
    if(password[j]<='Z'&& password[j]>='A'&&password[j]+number_add>'Z')
    { //原本字元為A~Z的,經遞移後超過Z,則減去26,回到A~Z的範圍(一定範圍內)
      password[j]=password[j]-26;
    }else if(password[j]>='a'&&password[j]<='z'&& password[j]+number_add>'z'||password[j]+number_add<0)
      {
        if(password[j]+number_add<0 && password[j]+number_add>127)
        {
          password[j]=password[j]-26;
        }
        //原本字元為a~z的,經遞移後超過z,則減去26,回到a~z的範圍(一定範圍內)
        password[j]=password[j]-26;      
      }
    password[j]=password[j]+number_add;
    cout << password[j] ;
  }
}
