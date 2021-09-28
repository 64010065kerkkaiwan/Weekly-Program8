#include <iostream>
using namespace std;

int printspace(int x){
    int space ;
    if (x>1)
    {
    for(int i = 1, k = 0; i <= x; ++i, k = 0)
    {
        for(space = 1; space <= x-i; ++space)
        {
            cout <<" ";
        }

        while(k != 2*i-1)
        {
            cout << "*";
            ++k;
        }
        cout << endl;
    }    
    }
    else
    {
        printf("Error");
    }

}

int main()
{
    int  rows;
    cin >> rows;
    printspace(rows);
    return 0;
}
