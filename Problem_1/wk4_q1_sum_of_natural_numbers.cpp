#include <iostream>
using namespace std;

//sum of natural numbers
//Ratu Faiha Salsabilla Rahmadina_532756
int main(){
    int n;
    cout << "Enter a natural number (all positive numbers excluding zero): "; //since all natural numbers are everything exceot zero
    cin >> n;

    if (n<1){
        cout << "Enter a natural number that's greater than 0: ";
        return 1;
    }
    int sum = 0;

    //calculate the sum using a for loop
    for (int i=1; i <= n; ++i){ //here we use a for loop where it repeats from 1 to n, adding each number to a sum. for example if the user input 3, the program will output 6 (since 1+2+3 = 6) 
        sum += i;
    }
    cout << "The sum of all natural numbers up to " << n << " " << "is: " << sum << endl;

return 0;
}


