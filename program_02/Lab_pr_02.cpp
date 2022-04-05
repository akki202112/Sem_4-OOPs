//program to make the use of inline function
#include<iostream>
using namespace std;

inline void display_Num(int num)
{
    cout<< num<< endl;
}
inline int area_of_square(int a)
{
    cout<<"Area of square " << a*a << endl;
    return (a*a);
}
int main()
{
display_Num(45);
area_of_square(45);
display_Num(3);
area_of_square(3);
    return 0;
}