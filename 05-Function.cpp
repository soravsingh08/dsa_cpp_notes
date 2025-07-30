#include <iostream>
#include <cmath>  
using namespace std;

/*//fucntion defiantion
int printHello(){
    cout<<"hello\n";
    return 3;
}

int main(){
   cout << printHello();
    return 0;
}

*/

//Sum of two numbers

/*int sum(int a,int b){
 int s = a +b;
 return s;
}

int main(){
    cout << "Sum = " << sum(24,46);
    return 0;
}*/


//FACTORIAL OF N

/*int factorialN(int n){
    int fact =1;
    
    for(int i=1; i<=n; i++){
        fact=fact*i; //fact*=i
    }
    return fact;
}

int main(){
    cout <<factorialN(5) << endl;
    cout << factorialN(10) << endl;
}
*/

//Sum of digit

/*int sumOfDigits(int num ){
  int digSum = 0;

  while (num>0){
    int lastDig = num %10;
    num/= 10;

    digSum += lastDig;
  }
  return digSum;
}

int main(){
    cout << "Sum = " << sumOfDigits(235) << endl;
    return 0;
}*/

/*int factorial (int n ){
     int fact =1;
    
    for(int i=1; i<=n; i++){
        fact=fact*i; //fact*=i
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n =  factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}

int main(){
    int n =8, r=2;
     cout << nCr(n,r) << endl;
     return 0;
}*/

//WAF TO CHECK IF A NUMBER IS PRIME OR NOT 

/*bool isPrime(int n ){
    if (n<=1)
    return false;

for(int i =2; i<=sqrt(n); i++){
    if(n%i == 0)
    return false;
}
  return true;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(isPrime(num))
    cout << num << " is a prime number.\n";
    else
    cout << num << "isnot a prime number.\n";
    return 0;
}*/
