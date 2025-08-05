#include <iostream>
using namespace std;

/*int main(){
    int marks[5] = {99,10,1,102,3};
    double price[] = {98.99, 105.67, 30.00};
}
*/

int main(){
    int marks[5] = {99,100,54,36,88};
    marks[0] = 101;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    //0 to size -1
    cout << marks[4] << endl;
    return 0;
}