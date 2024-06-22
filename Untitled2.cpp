#include <iostream>
#include <string>
using namespace std;

class Person {
//private:
  //  std::string name;
    //int age;

public:
    // Constructor
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Methods to get and set attributes
    std::string getName() const { return name; }
    int getAge() const { return age; }
    void setName(const std::string& n) { name = n; }
    void setAge(int a) { age = a; }

    // Method to display information
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Creating objects of the class
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    // Accessing attributes using methods
    std::cout << "Person 1: " << person1.getName() << ", " << person1.getAge() << " years old." << std::endl;
    std::cout << "Person 2: " << person2.getName() << ", " << person2.getAge() << " years old." << std::endl;

    // Modifying attributes using methods
    person1.setAge(32);
    person2.setName("Robert");

    // Displaying updated information
    person1.display();
    person2.display();

    return 0;
}

