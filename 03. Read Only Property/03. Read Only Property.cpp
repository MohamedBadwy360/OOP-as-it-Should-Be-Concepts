#include <iostream>

using namespace std;

class Person
{
private:

    int _ID = 10;
    string _first_name;
    string _last_name;

public:

    // Properity Get, this is read only property
    int ID()
    {
        return _ID;
    }

    // Properity Set
    void set_first_name(string first_name)
    {
        _first_name = first_name;
    }

    // Properity Get
    string get_first_name()
    {
        return _first_name;
    }

    void set_last_name(string last_name)
    {
        _last_name = last_name;
    }

    string get_last_name()
    {
        return _last_name;
    }

    string full_name()
    {
        return _first_name + " " + _last_name;
    }
};

int main()
{
    Person person1;

    person1.set_first_name("Mohamed");
    person1.set_last_name("Badwy");

    cout << "ID: " << person1.ID() << endl;
    cout << "First Name: " << person1.get_first_name() << endl;
    cout << "Last Name: " << person1.get_last_name() << endl;
    cout << "Full Name: " << person1.full_name() << endl;
}