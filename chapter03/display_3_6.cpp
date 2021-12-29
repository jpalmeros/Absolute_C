// Display 3.6 The Function round (part 1 of 2)
#include <iostream>
#include <cmath>
using namespace std;

int roundd(double number);
// Assumes number >= 0.
// Returns number rounded to the nearest integer.
int main()
{
    double doubleValue;
    char ans;
    do
    {
        cout << "Enter a double value: ";
        cin >> doubleValue;
        cout << "Rounded that number is " << roundd(doubleValue) << endl;
        cout << "Again? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "End of testing.\n";
    return 0;
}
// Uses cmath:
int roundd(double number)
{
    return static_cast<int>(floor(number + 0.5));
}
