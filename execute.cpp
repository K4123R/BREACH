#include <iostream>

using namespace std;

//Function Declarations
bool isThree(int a);
int gcd(int a, int b);

int main() 
{
    cout << "/////////Is Three////////" << endl;
    int input;
    cin >> input;
    cout << isThree(input) << endl;
    cout << "/////////////////////////" << endl;

    cout << "" << endl;

    cout << "///////////GCD///////////" << endl;
    int a, b;
    cout << "Input A: ";
    cin >> a;
    cout << "Input B: ";
    cin >> b;
    cout << "The GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    cout << "/////////////////////////" << endl;

    return 0;
}


bool isThree(int a)
{
    if(a == 3)
        return true;
    else {
        return false;
    }
}

//Calculates the GCD Recursively
int gcd(int a, int b) 
{
    if(b == 0)
        return a;
    else {
        return gcd(b, a%b);
    }    
}