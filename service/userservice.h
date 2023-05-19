//
// Created by ionel on 18.05.2023.
//

#ifndef A67_LAVINIA06_USERSERVICE_H
#define A67_LAVINIA06_USERSERVICE_H

#include "../repository/repository.h"
#include "../repository/userrepository.h"
class UserService {
private:
    Repository& repository;
    UserRepository* userRepository;
public:
    UserService(Repository& repository1, UserRepository* userRepository1);

    explicit UserService(Repository& repository1);
    std::vector<Dog> getAllUserService();
    unsigned int getNrElemsUserService();
    unsigned int getCapUserService();
    void addUserService(const Dog& dog);

    void repositoryType(const std::string& fileType);

    std::string& getFileService();
    ~UserService();
};

#endif //A67_LAVINIA06_USERSERVICE_H
