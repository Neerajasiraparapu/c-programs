#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:
    int age ,standard;
    string first_name, last_name;
    public:
    void set_age(int a)
    {
        age=a;
    }
    void set_standard(int b)
    {
        standard=b;
    }
    void set_first_name(string c)
    {
        first_name=c;
    }
    void set_last_name(string d)
    {
        last_name=d;
    }
    void get_age()
    {
        cout << age ;
        cout << "\n";
    }
     void get_last_name()
    {
    cout<< last_name << ", " ;
    
    }
     void get_first_name()
    {
    cout << first_name ;
    cout << "\n" ;    
    }
    void get_standard()
    {
    cout << standard ;
    cout << endl ;
    }
    void to_string()
    {
        cout<<endl;
        cout << age << "," << first_name << "," << last_name << "," << standard;
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    

    st.get_age();
    st.get_last_name();
    st.get_first_name();
    st.get_standard();
    st.to_string();
    
    
    return 0;
}
