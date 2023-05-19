#include <crtdbg.h>
#include "repository/repository.h"
#include "service/service.h"
#include "console/console.h"

int main() {
    std::vector<Dog> adminRepoVector;
    adminRepoVector.reserve(10);
    std::string filename = R"(C:\Users\ionel\CLionProjects\a67-lavinia06\dogs.txt)";
    Repository repo{adminRepoVector, filename};
    repo.initialiseRepo();
    Service service{repo};
    UserService userService{repo};
    DogValidator validator{};
    Console console{service, userService, validator};
    console.start();
    _CrtDumpMemoryLeaks();
    return 0;
}
