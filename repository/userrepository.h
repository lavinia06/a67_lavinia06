//
// Created by ionel on 17.05.2023.
//

#ifndef A67_LAVINIA06_USERREPOSITORY_H
#define A67_LAVINIA06_USERREPOSITORY_H
#include <vector>
#include "../domain/domain.h"
class UserRepository {
protected:
    std::vector<Dog> adoptionList;
    std::string userFilename;
public:
    explicit UserRepository(std::vector<Dog>& adoptionList1);

    UserRepository();
    virtual std::vector<Dog>& getAllUserRepo()=0;
    virtual unsigned int getNrElems()=0;
    virtual unsigned int getCap()=0;
    virtual void addUserRepo(const Dog& dog)=0;

    virtual void writeToFile()=0;

    virtual std::string& getFilename()=0;
    ~UserRepository();
};

class UserException: public std::exception {
private:
    std::string message;
public:
    explicit UserException(std::string& _message);

    const char *what() const noexcept override;
};

#endif //A67_LAVINIA06_USERREPOSITORY_H
