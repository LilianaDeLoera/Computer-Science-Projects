#include<iostream>

using namespace std;


bool isValidPassword(string pass) 
{
    //declaring variables
    int upperCase = 0;
    int lowerCase = 0;
    int digit = 0;
    int passLength = 0;
    int specialChar = 0;

    //using for loop
    for (int i = 0; i < pass.length(); i++) 
    {

        //checking for any digit
        if (isdigit(pass[i]))
        {
            digit = 1;
        }

        //check if it contains any lowercase
        else if (islower(pass[i])) 
        {
            lowerCase = 1;
        }

        //check if it contains any uppercase
        else if (isupper(pass[i]))
        {
            upperCase = 1;
        }

        //space
        else if (pass[i] == ' ')
        {

        }

        //special character
        else 
        {
            specialChar = 1;
        }
    }

    //checking length
    if (pass.length() >= 12) 
    {
        passLength = 1;
    }
    //valid password
    if (upperCase == 1 && lowerCase == 1 && digit == 1 && passLength == 1 && specialChar == 1) 
    {
        cout << "User Entered a Valid Password\n";
        return true;
    }
    //digit
    else if (digit == 0)
    {
        cout << "\nInvalid Password, it Must Contain 1 Digit Character\n";
        return false;
    }
    //checking uppercase
    else if (uppercase == 0) 
    {
        cout << "\nInvalid Password, it Must Contain 1 UpperCase Character\n";
        return false;
    }
    //check password length
    else if (passLength == 0) 
    {
        cout << "\nInvalid Password, Length of Password Must Be at Least 12 characters\n";
        return false;
    }
    //check for lowercase
    else if (lowerCase == 0) 
    {
        cout << "\nInvalid Password, it Must Contain 1 Lowercase Character\n";
        return false;
    }
    //check special character
    else if (specialChar == 0)
    {
        cout << "\nInvalid Passowrd, it must contain 1 Special Character\n";
        return false;
    }
}
int main() 
{
    string pass;

    cout << "\nPlease Enter Password: ";
    cin >> pass;
    isValidPassword(pass);
}