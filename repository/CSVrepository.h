//
// Created by ionel on 17.05.2023.
//

#ifndef A67_LAVINIA06_CSVREPOSITORY_H
#define A67_LAVINIA06_CSVREPOSITORY_H


#include "userrepository.h"

class CSVRepo: public UserRepository {
public:

    CSVRepo(const std::vector<Dog>& adoptionList, const std::string& userFilename);

    std::vector<Dog>& getAllUserRepo() override;

    unsigned int getNrElems() override;

    unsigned int getCap() override;

    void addUserRepo(const Dog &dog) override;

    void writeToFile() override;

    std::string& getFilename() override;

    ~CSVRepo();
};


#endif //A67_LAVINIA06_CSVREPOSITORY_H
