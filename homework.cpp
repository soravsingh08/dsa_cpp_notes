//CALCULATOR

#include <iostream>
using namespace std;

int main (){
    int a,b;
    char op;

    //Add
    cout << "Enter a:";
    cin >> a;
    cout << "Enter operator:";
    cin >> "+";
    cout << "Enter b:";
    cin >> b;

    int add = (a+b);
    cout << "result = " << add << endl;

    //Subtract
    cout << "Enter a:";
    cin >> a;
     cout << "Enter operator:";
    cin >> "-";
    cout << "Enter b:";
    cin >> b;

    int sum = (a-b);
    cout << "result = " << sum << endl;

}
