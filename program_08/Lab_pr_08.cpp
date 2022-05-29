// program to demonstrate the concept of destructor.
#include <iostream>
using namespace std;

class complex                       //class complex
{
private:
    int a, b;

public:
    complex(int x, int y)           //parameterized constructor
    {
        a = x;
        b = y;
    }
    ~complex()                     //destructor is called
    {
        cout << "object is destroyed" << endl;
    }

    void showdata()                //function to show output
    {
        cout << "a=" << a << ","<< "b=" << b << endl;
    }

};
    //main function
int main()
{
    complex c1(4,5);
    //c1.complex(5, 6);
    c1.showdata();
    return 0;
}