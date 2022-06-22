/*
Classes in C++ are user defined types declared with keyword class that has data and functions . Although classes and structures have the same type of functionality, there are some basic differences. The data members of a class are private by default and the members of a structure are public by default. Along with storing multiple data in a common block, it also assigns some functions (known as methods) to manipulate/access them. It serves as the building block of Object Oriented Programming.

It also has access specifiers, which restrict the access of member elements. The primarily used ones are the following:

public: Public members (variables, methods) can be accessed from anywhere the code is visible.
private: Private members can be accessed only by other member functions, and it can not be accessed outside of class.

You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.

Input Format

Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.
*/
#include <iostream>
#include <sstream>
using namespace std;


class Student
{
    public:
    int age, standard;
    string first_name, last_name;
    
    void set_age(int a){
         age=a;
    }
    
    void set_standard(int a){
        standard=a;
    }    
    
    void set_first_name(string a){
        first_name=a;
    }
    
    void set_last_name(string a){
        last_name=a;
    }
    
    int get_age(){
        return age;
    }
    
    int get_standard(){
        return standard;
    }
    
    string get_first_name(){
        return first_name;
    }
    
    string get_last_name(){
        return last_name;
    }
    string t_string(){
           string s = "";
           s+=to_string(age);
           s+=",";
           s+=first_name;
           s+=",";
           s+=last_name;
           s+=",";
           s+=to_string(standard);
           return s;
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
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.t_string();
    
    return 0;
}
