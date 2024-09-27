#include <iostream>
using namespace std;

//wk4_q2_multiplication table
//Ratu Faiha Salsabilla Rahmadina_532756
int main(){
    int n; 

    cout << "Enter an integer to print its multiplication table: "; //here we ask the user to enter an integer n
    cin >> n;

    for (int i = 1; i <= 10; ++i){ //we use a for loop where the loop stops when the integer is greater than 10
        int product = n*i; //the n integer that the user inputs is multiplied by i
        cout << n << " x " << i << " = " << product << endl; //this prompts the outcome from what was met in the for loop, after that it goes back to the beginning of the loop where it is added by 1
    }
return 0;
}