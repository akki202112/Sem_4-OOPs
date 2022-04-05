//RAHUL_KUMAR ROLLno_202112 CSE_GROUP_3 
#include <iostream>
using namespace std;

void getmatrix(int a[10][10], int x, int y);
void display_matrix(int a[10][10], int x, int y);
int main()
{
    int a[10][10], m, n;
    cout << "Enter the value of m and n" << endl;
    cin >> m >> n;
    getmatrix(a, m, n);
    cout << endl;
    display_matrix(a, m, n);
    return 0;
}

void getmatrix(int a[10][10], int x, int y)
{
    int i, j;
    for (i = 0; i, i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cin >> a[i][j];
        }
    }
}

void display_matrix(int a[10][10], int x, int y)
{
    int i, j;

    cout << "Entered matrix" << endl;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}