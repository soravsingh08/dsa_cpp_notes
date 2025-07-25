#include <iostream>
using namespace std;

/*
int main (){
    int n =45;
 
    if(n>7){
        cout<<"n is positive\n";
    }else {
        cout<< "n is negative\n";
    }

    return 0;

}

*/

// FINDING EVEN NUMBER

/*
int main(){
    int n;
    cout << "enter number:" ;
    cin >> n;

    if(n%2 == 0){
        cout << " number is even";

    }else cout << "number is odd";
}
    */


// grading system

/*int main(){
    int n;
    cout << "enter marks :";
    cin >> n;

    if(n>=90){
        cout << "A" ;
    }else if (n>= 80 && n <90){
        cout << "B\n";
    }else{
     cout << "C\n";
    }
}*/

//UPPER CASE LOWER CASE
/*
int main(){
    char ch;
    cout << "enter char :";
    cin >> ch; 

    if (ch>= 'a' && ch <= 'z'){
        cout<< "lowercase\n";
    }else {
        cout << "Uppercase";
    }

    return 0;
} */


//ternary statement
/*
int main(){
    int n =-45;
    cout << (n>= 0 ? "positive" : "negative") << endl;
    return 0;
}*/


// L O O P S 
 
//WHILE LOOP
/*
int main(){
    int count = 1;
    while (count <= 5){
        cout << count;
        count ++;
}

}

// SUM OF N NUMBER
int main(){
    int n = 8;
    int i = 1;
    int sum = 0;
    while(i <= n){
      sum += i;
      i++;   }
    
      cout << sum;
      return 0;
}
      */



//for

/*
int main (){
    int n = 24 + 34;
    for(int i=1; i<=n; i++){
        cout<< i << " ";
    }
    return 0;
} */

//SUM OF NUMBER FROM 1 TO N
/*
int main(){

    int n =5;
    int sum=0;

    for(int i=1; i<=n; i++ ){
        sum += i;
    }

    cout << sum;
    return 0;

}
    */ 




    // SUM OF ODD NUM FROM 1 TO N
/*
    int main(){
        int n = 30;
        int oddSum = 0;
        for (int i=1; i<=n; i++){
           if(i%2 != 0){
             oddSum += i;
           }
        }
        cout <<"Odd Sum = " << oddSum << endl;
        return 0;
    }
*/

//CHRCK IF A NUMBER IS PRIME OR NOT 
/*
int main (){
    int n;
    cout <<  "enter number : ";

    cin >> n  ;
    bool isPrime = true;

    for (int i =2; i*i<=n; i++ ){
        if (n%1 == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout<< "prime number\n";
    } else{
        cout << "non prime number\n";
    }
    return 0;
}
*/

//NESTED LOOP

int main(){
    int n =5;
    for(int i=1; i<=n; i++){
        int m = 9;
        for(int j=1; i<=m; j++){
        cout<< "*";
    }
    cout << endl;
    }
    return 0;
}