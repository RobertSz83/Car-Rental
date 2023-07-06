#include "Client.h"
#include <iostream>

Client::Client(string f, string l) : firstName(f), lastName(l) {};
Client::Client(){};
string Client::getFirstName() {
return firstName;
}
string Client::getLastName() {
return lastName;
}
void Client::setFirstName(string f) {
firstName = f;
}
void Client::setLastName(string l) {
lastName = l;
}
void Client::print() {
cout << "First Name: " << firstName << ", Last Name: " << lastName << endl;
}
