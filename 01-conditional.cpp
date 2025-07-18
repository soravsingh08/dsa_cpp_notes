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


// gradign system

int main(){
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
}