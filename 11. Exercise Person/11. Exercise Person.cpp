#include <iostream>

using namespace std;

class Person
{
private:

    string _firstName;
    string _lastName;
    string _email;
    string _phone;
    int _ID;

public:

    Person(int ID, string firstName, string lastName, string email, string phone)
    {
        _ID = ID;
        _firstName = firstName;
        _lastName = lastName;
        _email = email;
        _phone = phone;
    }

    void SetFirstName(string firstName)
    {
        _firstName = firstName;
    }

    string FirstName()
    {
        return _firstName;
    }

    void SetLastName(string lastName)
    {
        _lastName = lastName;
    }

    string LastName()
    {
        return _lastName;
    }

    void SetEmail(string email)
    {
        _email = email;
    }

    string Email()
    {
        return _email;
    }

    void SetPhone(string phone)
    {
        _phone = phone;
    }

    string Phone()
    {
        return _phone;
    }

    // Read Only
    int ID()
    {
        return _ID;
    }

    void PrintInfo()
    {
        cout << "\n=========================\n";
        cout << "\tInfo\n";
        cout << "=========================\n";

        cout << "ID        : " << _ID << endl;
        cout << "First Name: " << _firstName << endl;
        cout << "Last Name : " << _lastName << endl;
        cout << "Full Name : " << _firstName << " " << _lastName << endl;
        cout << "Email     : " << _email << endl;
        cout << "Phone     : " << _phone << endl;
        cout << "=========================\n\n";
    }

    void SendEmail(string subject, string body)
    {
        cout << "\nThe following message is sent successfully to email: " << _email << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }

    void SendSMS(string message)
    {
        cout << "\nThe following message is sent successfully to phone: " << _phone << endl;
        cout << "Body: " << message << endl;
    }
};

int main()
{
    Person person(1, "Mohamed", "Badwy", "mohamedbadwy360@gmail.com", "01553414588");

    person.PrintInfo();
    person.SendEmail("Hi", "How are you?");
    person.SendSMS("How are yoy?");

}
