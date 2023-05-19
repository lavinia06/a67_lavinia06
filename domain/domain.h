//
// Created by ionel on 17.05.2023.
//

#ifndef A67_LAVINIA06_DOMAIN_H
#define A67_LAVINIA06_DOMAIN_H
using namespace std;
#include <string>
class Dog{
private:
    std::string breed;
    std::string name;
    int age;
    std::string photograph;
public:
    explicit Dog(std::string breed = "empty", std::string name = "empty", int age = 0, std::string photograph = "empty");
    std::string breedGetter() const;

    std::string nameGetter() const;

    int ageGetter() const;

    std::string photoGetter() const;


    ~Dog();

    std::string toString() const;

    bool operator==(const Dog& dogToCheck) const;

    friend std::istream& operator>>(std::istream& inputStream, Dog& dog);

    friend std::ostream & operator<<(std::ostream& outputStream, const Dog& dogOutput);
};

#endif //A67_LAVINIA06_DOMAIN_H
