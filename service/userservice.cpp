//
// Created by ionel on 18.05.2023.
//

#include "userservice.h"
#include "../repository/CSVrepository.h"
#include "../repository/HTMLrepository.h"

UserService::UserService(Repository &repository1, UserRepository *userRepository1):repository(repository1), userRepository(userRepository1) {

}

UserService::UserService(Repository &repository1) : repository(repository1){

}

std::vector<Dog> UserService::getAllUserService() {
    if (this->userRepository->getAllUserRepo().empty()) {
        std::string error;
        error += std::string("The list of adoptions is empty!");
        if (!error.empty())
            throw UserException(error);
    }
    return this->userRepository->getAllUserRepo();
}

unsigned int UserService::getNrElemsUserService() {
    if (this->userRepository->getNrElems()==0) {
        std::string error;
        error += std::string("The list of adoptions is empty!");
        if (!error.empty())
            throw UserException(error);
    }
    return this->userRepository->getNrElems();
}

unsigned int UserService::getCapUserService() {
    return this->userRepository->getCap();
}

std::string &UserService::getFileService() {
    return this->userRepository->getFilename();
}

UserService::~UserService() = default;

void UserService::addUserService(const Dog& dog) {
    this->userRepository->addUserRepo(dog);
    std::string name = dog.nameGetter();
    int delete_index = this->repository.findByName(name);
    this->repository.deleteRepo(delete_index);
}

void UserService::repositoryType(const std::string& fileType) {
    if (fileType == "csv") {
        std::vector<Dog> userVector;
        std::string userFile = R"(C:\Users\ionel\CLionProjects\a67-lavinia06\AdoptionList.csv)";
        auto * repo = new CSVRepo{ userVector, userFile};
        this->userRepository = repo;
    }else if (fileType == "html") {
        std::vector<Dog> userVector ;
        std::string userFile = R"(C:\Users\ionel\CLionProjects\a67-lavinia06\AdoptionList.html)";
        auto * repo = new HTMLRepo{userVector, userFile};
        this->userRepository = repo;
    } else {
        std::string error;
        error += std::string("The filename is invalid!");
        if(!error.empty())
            throw UserException(error);
    }
}