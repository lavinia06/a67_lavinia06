//
// Created by ionel on 18.05.2023.
//

#ifndef A67_LAVINIA06_SERVICE_H
#define A67_LAVINIA06_SERVICE_H

#include "../repository/repository.h"

class Service{
private:
    Repository& repository;
public:
    explicit Service(Repository &repo);
    std::vector<Dog> getAllService();
    unsigned int getNrElemsService();
    unsigned int getCapService();
    void addService(const std::string& breed, const std::string& name, int age, const std::string& photograph);
    void deleteService(const std::string& name);
    void updateService(const std::string& old_name, const std::string& new_breed, const std::string& new_name, int new_age,const std::string& new_photo);
    void getFiltered(std::vector<Dog> &valid_dogs, const std::string &filter_string, int age_filter);
    ~Service();
};

#endif //A67_LAVINIA06_SERVICE_H
