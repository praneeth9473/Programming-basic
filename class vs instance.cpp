using namespace std;
#include <iostream>
class Person {
public:
    int age;

    Person(int initialAge);

    void amIOld();

    void yearPasses();
…
void Person::yearPasses() 
{
    // Increment the age of the person in here
    age++;
}

int main(){
