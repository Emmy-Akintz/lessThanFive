#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand( (unsigned) time(NULL) );

    int randomNum = rand() %10;
    cout << randomNum << endl;

    for (int i = 0; i < 5; i++)
    {
        int userNum;
        cout << "Input a number that must be less than the random number and you have five attempts!" << endl;
        cout << "Input a number" << endl;
        cin >> userNum;

        if (userNum < randomNum) {
            cout << "The number is less than the random number." << endl;
        } else if (userNum > randomNum) {
            cout << "The number is greater than the random number." << endl;
        } else if ( (userNum = randomNum) ) {
            cout << "You have guessed right and the value is " << randomNum << endl;
            break;
        } else {
            return 0;
        }
    }
    return 0;
}
