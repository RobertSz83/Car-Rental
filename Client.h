#include <iostream>

using namespace std;

class Client {
public:
Client(string f, string l);
Client();
string getFirstName();
string getLastName();
void setFirstName(string f);
void setLastName(string l);
void print();
private:
string firstName;
string lastName;
};

#endif // CLIENT_H_






