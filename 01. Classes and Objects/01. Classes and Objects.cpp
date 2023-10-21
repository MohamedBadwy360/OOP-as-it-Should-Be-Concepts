#include <iostream>

using namespace std;

class Person
{
public:
    string first_name;
    string last_name;

    string name()
    {
        return first_name + " " + last_name;
    }
};

int main()
{
    Person person1;

    person1.first_name = "Mohamed";
    person1.last_name = "Badwy";

    cout << person1.name() << endl;
}

