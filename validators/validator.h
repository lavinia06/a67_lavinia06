//
// Created by ionel on 18.05.2023.
//

#ifndef A67_LAVINIA06_VALIDATOR_H
#define A67_LAVINIA06_VALIDATOR_H
#include "../domain/domain.h"

class ValidationException: public std::exception {
private:
    std::string message;
public:
    explicit ValidationException(std::string& _message);

    const char *what() const noexcept override;
};

class DogValidator {
public:
    DogValidator();

    bool validateString(const std::string& input);

    void validateBreed(const std::string& breed);

    void validateName(const std::string& name);

    void validateAgeString(const std::string& age);

    void validateAge(int age);

    void validatePhotoLink(const std::string& photograph);

    ~DogValidator();
};

#endif //A67_LAVINIA06_VALIDATOR_H
