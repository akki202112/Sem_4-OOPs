#include <iostream>
using namespace std;

class STRING
{
private:
    string str1;
    string str2;

public:
    string store_string(string);
    string add_string(string, string);
    int equate_string(string, string);
    void print_string(string);
};
string STRING::store_string(string st)
{
    str1 = st;
    return (str1);
}
string STRING::add_string(string st1, string st2)
{
    return (st1 + st2);
}
int STRING::equate_string(string st1, string st2)
{
    if (st1 == st2)
    {
        return 1;
    }
    return 0;
}
void STRING::print_string(string st)
{
    cout<<st;
}

int main()
{
    STRING st;
    st.store_string("Hello");
    st.print_string("you are welcome");
    if(st.equate_string("Hello" ,"hell"))
    {
        cout<<"both string are matched"<<endl;
    }
    else
    {
        cout<<"string are not matched"<<endl;
    }
    cout<<st.add_string("I am Rahul sharma ","I am a student of CUH");
return 0;
}
