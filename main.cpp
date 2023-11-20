#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    int randomNum = rand() % 10;

    for (int i = 0; i < 5; i++)
    {
        int userNum;
        cout << "Input a number that must be less than the random number which is less than or equal to 10 and you have 5 attempts!" << endl;
        cout << "Input a number" << endl;
        cin >> userNum;

        if (userNum < randomNum)
        {
            cout << "The number is less than the random number." << endl;
        }
        else if (userNum > randomNum)
        {
            cout << "The number is greater than the random number." << endl;
        }
        else if ((userNum = randomNum))
        {
            cout << "You have guessed right and the value is " << randomNum << endl;
            break;
        }
        else
        {
            cout << "You lost!" << endl;
            cout << "The value is " << randomNum << endl;
            return 0;
        }
    }

         
    return 0;
}
