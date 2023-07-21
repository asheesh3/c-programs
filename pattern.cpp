#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 9; i++)
    {

        if (i == 9)
        {
            break;
        }
        else
        {
            int space = (9 - i) % 2;
            int j;

            for (j = 1; j <= space; j++)
            {

                if (j == space)
                {
                    cout << "x";
                    break;
                }
                cout << "";
            }
        }

        cout << endl;
    }
    return 0;
}