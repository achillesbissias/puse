# include <iostream>
using namespace std;

int main() {

    // User Input
    cout << "Input size of diamond: " << endl;
    int height;
    cin >> height;

    // Declaring variables
    int spacecount = height; // keeps count of # of spaces
    int count = 0; // keeps count for # of loop iterations


    while (count < height) // Outputs first half of diamond
    {
        count += 1;
        spacecount -=1;

        cout << endl;

        for (int i = 0; i < spacecount; ++i) 
        {
            cout << " ";
        }

        for (int i = 0; i < count; ++i) 
        {
            cout << " *";
        }

    }

    while (count > 0) // Outputs second half of diamond
    {
        count -= 1;
        spacecount += 1;

        cout << endl;

        for (int i = 0; i < spacecount; ++i)
        {
            cout << " ";
        }


        for (int i = 0; i < count; ++i) 
        {
            cout << " *";
        }
    }

    return 0;
}