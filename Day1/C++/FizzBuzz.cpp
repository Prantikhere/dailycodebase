/**
 * @author dsdsharma
 * @date 20/12/2018
 */

#include <iostream>

using namespace std;

int main()
{
   int n;
   cout << "====Fizz Buzz ====" << endl;
   cout << "Enter the number: ";
   cin >> n;
   for(int i=1; i<=n; i++){
       if(i%5==0 && i%3==0){
           cout << "FizzBuzz ";
       }else if(i%3==0){
           cout << "Fizz ";
       }else if(i%5==0){
           cout << "Buzz ";
       }else{
           cout << i << " ";
       }
       
   }
   
   return 0;
}
