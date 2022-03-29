#include <iostream>
using namespace std;

int iterative (int x, int y) 
{
    //Base case
    if (x == 0) return y;
    if (y == 0) return x;
    if (x == y) return x;

    //General case
    while (x != y) 
    {
        if (x > y) x -= y;
        else y -= x;
    }
    return x;
}

int recursive (int x, int y)
{
    //Base case
    if (x == 0) return y;
    if (y == 0) return x;
    if (x == y) return x;

    //General case
    return (x > y) ? recursive (x - y, y) : recursive (x, y - x);
}

int recursive2 (int x, int y)
{
    //First part Base case, second part General case
    return y == 0 ? x : recursive2 (y, x % y);   
}

int main () {
    int x, y;

    //User inputs
    cout << "\nEnter first number : ";
    cin >> x;
    cout << "\nEnter second number : ";
    cin >> y;

    //Results
    cout << "\n(using recursive method 1) GCD of " 
    << x << " and " << y << " is " << recursive (x, y) << "\n\n";
    cout << "\n(Using recursive method 2) GCD of " 
    << x << " and " << y << " is " << recursive2 (x, y) << "\n\n";
    cout << "\n(Using iterative method) GCD of " 
    << x << " and " << y << " is " << iterative (x, y) << "\n\n";

    return 0;
}