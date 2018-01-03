#include <iostream>
using namespace std;

int main()
{
    int i;
    
    cout <<"請問要加密[1]/解密[2]" <<"\n";
    
    cin >> i;
    
    if (i == 1){
      
      int n, a;
      
      cout <<"請問幾個字";
      
      cin >> n;
      
      char input[n + 1];
      
      cout <<"請輸入字母";
      
      cin >> input;
      
      cout <<"位移幾個字母";
      
      cin >> a;
      
      for (int i = 0; i < n; i++){
          
       if (input[i] + a > 90){
           
          input[i] = input[i] + a - (90 - 65) - 1;
       } 
       else {
           
         input[i] = input[i] + a;
       }
      }
      cout << input <<"\n";
}
}
