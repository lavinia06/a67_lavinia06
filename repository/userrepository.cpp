//
// Created by ionel on 17.05.2023.
//

#include "userrepository.h"

UserRepository::UserRepository(std::vector<Dog> &adoptionList1) {
    this->adoptionList = adoptionList1;
}
UserException::UserException(std::string &_message): message(_message) {}

const char* UserException::what() const noexcept {
    return message.c_str();
}

UserRepository::UserRepository() = default;

UserRepository::~UserRepository() = default;