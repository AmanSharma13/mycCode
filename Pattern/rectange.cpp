#include <iostream>
using namespace std;
 
int main()
{
    int rows, i, j;
 
    cout << "Enter number of rows: ";
    cin >> rows;
 
    // outer loop is responsible for row
    for(i = 1; i <= rows; i++)
    {
        //inner loop is responsible for columns
        for(j = 1; j <= i; j++)
        {
            cout << " " << "*";
        }
        // give line breaks after ending every row
        cout << "\n";
    }
    return 0;
}