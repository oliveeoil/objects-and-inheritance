#include <iostream>
#include <string>

class Person {
public:
    
    std::string name;
    int age;


    void getPerson()
    {
        std::cout << name << " is "
             << age << " years old." << std::endl;
    }
};

class Student: public Person{
public: 

    std::string major; 
    int yearsInSchool; 

    void getStudent()
    {
        std::cout << name << " is "
             << age << " years old and is a/n " << major << " major that's been in school for " << yearsInSchool << " years." << std::endl;
    }

};


int main() {
    Person person1;
    person1.name = "Olivia";
    person1.age = 21;
    
    person1.getPerson();

    Student student1; 
    student1.name = "Olivia D.";
    student1.age = 21; 
    student1.major = "English"; 
    student1.yearsInSchool = 4;
    
    student1.getStudent();
    
    return 0;
};
