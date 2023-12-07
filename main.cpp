// #include <iostream>
// #include <cstdlib>
// #include <time.h>

// using namespace std;

// int main()
// {
//     srand((unsigned)time(NULL));

//     int randomNum = rand() % 10;

//     cout << "Input a number that must be less than the random number which is less than or equal to 10 and you have 5  attempts!" << endl;

//     for (int i = 0; i < 5; i++)
//     {
//         int userAttempt = 6;
//         userAttempt = userAttempt - 1;

//         int userNum;
//         cout << "Input a number" << endl;
//         cin >> userNum;

//         if (userNum < randomNum)
//         {

//             cout << "Input a number that must be less than the random number which is less than or equal to 10 and you have " << userAttempt << " attempts!" << endl;
//             cout << "The number is less than the random number." << endl;
//         }
//         else if (userNum > randomNum)
//         {

//             cout << "Input a number that must be less than the random number which is less than or equal to 10 and you have " << userAttempt << " attempts!" << endl;
//             cout << "The number is greater than the random number." << endl;
//         }
//         else if ((userNum = randomNum))
//         {
//             cout << "You have guessed right and the value is " << randomNum << endl;
//             break;
//         }
//         else
//         {
//             cout << "You lost!" << endl;
//             cout << "The value is " << randomNum << endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cstdio>

using namespace std;

// declaring all functions
void permission();
void easyMode();
void mediumMode();
void hardMode();
void bossMode();
void guessGame();

// defining functions
void permission()
{
    char userPermit[1];

    cin >> userPermit[1];

    if (userPermit[1] == 'y' || userPermit[1] == 'Y')
    {
        cout << "Okay!!";
        guessGame();
    }
    else if (userPermit[1] == 'n' || userPermit[1] == 'N')
    {
        cout << "Have a nice day" << endl;
    }
    else
    {
        cout << "Invalid Input!" << endl;
    }
}

void easyMode()
{
    int randomNum = rand() % 10;

    int userAttempt = 5;

    for (int i = 0; i < 5; i++)
    {
        int userNum;
        printf("Guess a number from the range 0 - 10 and you have %d attempts!\n", userAttempt);
        printf("Input a number: ");
        scanf("%d", &userNum);

        userAttempt = userAttempt - 1;

        if (userNum < randomNum)
        {
            printf("The number is less than the random number.\n");
        }
        else if (userNum > randomNum)
        {
            printf("The number is greater than the random number.\n");
        }
        else if ((userNum = randomNum))
        {
            printf("You have guessed right!! The value is %d\n", randomNum);
            printf("Do you wish to continue [Y/N]: ");
            permission();
            break;
        }
        else
        {
            printf("ERROR 404 (..)");
        }
    }

    if (userAttempt == 0)
    {
        printf("You lost!\n");
        printf("The value is %d", randomNum);
        printf("\nDo you wish to continue [Y/N]: ");
        permission();
    }
}

void mediumMode()
{
    int randomNum = rand() % 100;

    int userAttempt = 10;

    for (int i = 0; i < 10; i++)
    {
        int userNum;
        printf("Guess a number from the range 0 - 100 and you have %d attempts!\n", userAttempt);
        printf("Input a number: ");
        scanf("%d", &userNum);

        userAttempt = userAttempt - 1;

        if (userNum < randomNum)
        {
            printf("The number is less than the random number.\n");
        }
        else if (userNum > randomNum)
        {
            printf("The number is greater than the random number.\n");
        }
        else if ((userNum = randomNum))
        {
            printf("You have guessed right!! The value is %d\n", randomNum);
            printf("Do you wish to continue [Y/N]: ");
            permission();
            break;
        }
        else
        {
            printf("ERROR 404 (..)");
        }
    }

    if (userAttempt == 0)
    {
        printf("You lost!\n");
        printf("The value is %d", randomNum);
        printf("\nDo you wish to continue [Y/N]: ");
        permission();
    }
}

void hardMode()
{
    int randomNum = rand() % 1000;
    int userAttempt = 10;

    for (int i = 0; i < 10; i++)
    {
        int userNum;
        printf("Guess a number from the range 0 - 1000 and you have %d attempts!\n", userAttempt);
        printf("Input a number: ");
        scanf("%d", &userNum);

        userAttempt = userAttempt - 1;

        if (userNum < randomNum)
        {
            printf("The number is less than the random number.\n");
        }
        else if (userNum > randomNum)
        {
            printf("The number is greater than the random number.\n");
        }
        else if ((userNum = randomNum))
        {
            printf("You have guessed right!! The value is %d\n", randomNum);
            printf("Do you wish to continue [Y/N]: ");
            permission();
            break;
        }
        else
        {
            printf("ERROR 404 (..)");
        }
    }

    if (userAttempt == 0)
    {
        printf("You lost!\n");
        printf("The value is %d", randomNum);
        printf("\nDo you wish to continue [Y/N]: ");
        permission();
    }
}

void bossMode()
{
    int randomNum = rand() % 10000;
    int userAttempt = 20;

    for (int i = 0; i < 20; i++)
    {
        int userNum;
        printf("Guess a number from the range 0 - 1000 and you have %d attempts!\n", userAttempt);
        printf("Input a number: ");
        scanf("%d", &userNum);

        userAttempt = userAttempt - 1;

        if (userNum < randomNum)
        {
            printf("The number is less than the random number.\n");
        }
        else if (userNum > randomNum)
        {
            printf("The number is greater than the random number.\n");
        }
        else if ((userNum = randomNum))
        {
            printf("You have guessed right!! The value is %d\n", randomNum);
            printf("You are really a BOSS!!\n");
            printf("Do you wish to continue [Y/N]: ");
            permission();
            break;
        }
        else
        {
            printf("ERROR 404 (..)");
        }
    }

    if (userAttempt == 0)
    {
        printf("You lost!\n");
        printf("The value is %d", randomNum);
        printf("\nDo you wish to continue [Y/N]: ");
        permission();
    }
}

// This function is use to call the other functions above based on the user input
void guessGame()
{
    // int userAllow[4] = {1, 2, 3, 4};
    // for (int i = 0; i < userAllow[0]; ++i) {
    //     // char g = 'g';
    //     int g = 2;
    //     bool inputCheck = g == userAllow[i];
    //     if (inputCheck) {
    //         cout << "okay";
    //     } else {
    //         cout << "not okay";
    //     }
    // }
    int userMode;

    cout << "__________Welcome to Guess the Number__________" << endl;
    cout << " 1. Easy Mode\n 2. Medium Mode\n 3. Hard Mode\n 4. Boss Mode" << endl;
    cout << "Please select your difficulty: ";
    cin >> userMode;

    switch (userMode)
    {
    case 1:
        easyMode();
        break;

    case 2:
        mediumMode();
        break;

    case 3:
        hardMode();
        break;

    case 4:
        bossMode();
        break;

    default:
        cout << "Invalid Number!!" << endl;
        guessGame();
    }
}

int main()
{
    srand((unsigned)time(NULL));
    // easyMode();
    // mediumMode();
    // hardMode();
    // bossLevel();guessGame();

    // cout <<easyMode(userPermit);

    guessGame();

    return 0;
}
