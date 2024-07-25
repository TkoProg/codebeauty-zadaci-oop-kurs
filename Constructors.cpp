#include <iostream>

using namespace std;

class User {
public:
    string FirstName;
    string LastName;
    int Age;
    string Email;
    // This here is an empty default constructor
    // User(){} // Constructors look similar to functiuons, they are named just like the class, they don't have a return type, they don't have parameters, if you don't create of yourself, C++ will create it, it will be invoked automatically when an object of that class is created, there can be only one default constructor
    //This here is a default constructor
    User() {
        FirstName = "nn";
        LastName = "nln";
        Age = 0;
        Email = "not set";
    }
    //Parameterized constructor
    User(string fName, string lName, int age) {
        FirstName = fName;
        LastName = lName;
        Age = age;
        Email = fName + "." + lName + "@mail.com";
    }
};

void GetUserInfo(User u) {
cout<<"Name: "<<u.FirstName<<endl;
cout<<"Last name: "<<u.LastName<<endl;
cout<<"Age: "<<u.Age<<endl;
cout<<"Email: "<<u.Email<<endl;
}

int main() {
    User user1("Saldina", "Nurak", 27);
    User user2("Anna", "Lopez", 28);
    User user3;
    /*user1.FirstName = "Saldina";
    user1.LastName = "Nurak";
    user1.Age = 27;
    user1.Email = "saldinanurak@mail.com";*/
    GetUserInfo(user1);
    GetUserInfo(user2);
    GetUserInfo(user3);
    return 0;
}