//
// Created by ionel on 17.05.2023.
//

#include <fstream>
#include "CSVrepository.h"

CSVRepo::CSVRepo(const vector<Dog> &adoptionList, const string &userFilename) {
    this->adoptionList = adoptionList;
    this->userFilename = userFilename;
}

std::vector<Dog> &CSVRepo::getAllUserRepo() {
    return this->adoptionList;
}

unsigned int CSVRepo::getNrElems() {
    return this->adoptionList.size();
}

unsigned int CSVRepo::getCap() {
    return this->adoptionList.capacity();
}

void CSVRepo::addUserRepo(const Dog &dog) {
    this->adoptionList.push_back(dog);
    this->writeToFile();

}

void CSVRepo::writeToFile() {
    std::ofstream fout(this->userFilename);
    if(!this->userFilename.empty())
        for(const Dog& dog: this->adoptionList)
            fout<<dog<<"\n";
    fout.close();
}

std::string &CSVRepo::getFilename() {
    return this->userFilename;
}

CSVRepo::~CSVRepo()=default;