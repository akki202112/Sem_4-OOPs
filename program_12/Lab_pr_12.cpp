// operator overloading
#include <iostream>
using namespace std;

class complex
{
protected:  //Data members
    int a;
    int b;
public:
    complex(int r = 0, int i = 0)  // Parameterized constructor with default arguments ;
    {
        a = r;
        b = i;
    }
    complex operator+(complex c) // operator overloading (binary operator overloading)
    {
        complex temp;  //temporary object of class temp 
        temp.a = a + c.a;   
        temp.b = b + c.b;
        return temp;
    }
    void display(complex c)  //Simple display function
    {
        cout << c.a<< "+" << c.b<< "i";
        cout<<endl;
    }
};
int main(void) //Driver function
{
    complex c1(7, 6);  
    c1.display(c1);
    complex c2(1, 9);
    c2.display(c2);
    complex c3;
    c3 = c1 + c2;
    c3.display(c3);

    return 0;
}