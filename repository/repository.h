//
// Created by ionel on 17.05.2023.
//

#ifndef A67_LAVINIA06_REPOSITORY_H
#define A67_LAVINIA06_REPOSITORY_H
#include <vector>
#include "../domain/domain.h"
class Repository {
private:
    std::vector<Dog> adminRepositoryVector;
    std::string dogsFilename;

public:
    void loadDogsFromFile();

    void writeDogsToFile();

    explicit Repository(std::vector<Dog>& repo_vector, std::string& dog_filename);

    void initialiseRepo();

    std::vector<Dog>& getAllRepo();

    unsigned int getNrElems();

    unsigned int getCap();

    void addRepo(const Dog& dog);

    int findByName(const std::string& name);

    void deleteRepo(int delete_index);

    void updateRepo(int update_index, const Dog& new_dog);

    ~Repository();
};

class RepositoryException: public std::exception {
private:
    std::string message;
public:
    explicit RepositoryException(std::string& _message);

    const char *what() const noexcept override;
};
#endif //A67_LAVINIA06_REPOSITORY_H
