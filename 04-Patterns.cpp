#include <iostream>
using namespace std;
/*
int main()
{
 int n = 4;

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
        {
         cout << i << " ";
        }
           cout << endl;
    }
    return 0;
}
*/

//Print ABCD
/*

int n = 6;


int main(){
    for (int i=0; i < n; i++ ){
         char ch = 'A';
       
        for (int j=0;j<n; j++){
            cout << ch;
            ch = ch+1;
        }
        cout << endl;
    }
    return 0;
} */

// print 123456789
/*
int main(){
    int n = 3;
    int num = 1;

    for (int i = 0; i<n; i++){
     for(int j=0; j<n; j++){
        cout << num;
        num++;
     }
      cout << endl;
    }
    return 0;
}*/ 

//Triangle Pattern
/*int n = 5;
int main(){
    for(int i=0; i<n+1; i++){
     for( int j=1; j<i+1; j++){
        cout << j;
     }
     cout << endl;
    }
    return 0;
}
*/


//Reverse Triangle
/*int n = 5;
int main(){
    for(int i=0; i<n+1; i++){
     for( int j=1; j<i+1; j++){
        cout << j;
     }
     cout << endl;
    }
    return 0;
}*/

// FLOYDS TRIANGLE
/*int n = 4;
int num = 1;
int main(){
    for(int i=0; i<n; i++){
     for( int j=i+1; j>0; j--){
        cout << num;
        num++;
     }
     cout << endl;
    }
    return 0;
}*/

//INVERTED TRIANGLE

/*int main (){
    int n=4;

    int num=1;

    //space
    for(int i=0; i<n; i++){
     for(int j=0; j<i; j++){
        cout <<  " ";
     }
     //nums
     for(int j=0; j<n-i; j++){
        cout << (i+1);
     }
     cout << endl;
    } 
    return 0 ;
}*/


//PYRAMID PATTERN
int main(){
    int n = 4;
    
  
    for(int i=0; i<n; i++ ){
        //spaces : n-i-1
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        //nums 1 : i+1
         for(int j=1; j<=i+1; j++){
            cout << j;
        }
        
        //nums 2 : 
         for(int j=i; j>0; j--){
            cout << j;
        }
        cout <<endl;

    }
    return 0;
}