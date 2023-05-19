//
// Created by ionel on 18.05.2023.
//

#ifndef A67_LAVINIA06_CONSOLE_H
#define A67_LAVINIA06_CONSOLE_H
#include "../service/service.h"
#include "../service/userservice.h"
#include "../validators/validator.h"

class Console {
private:
    Service& service;
    UserService& userService;
    DogValidator& validator;
public:
    Console(Service& service, UserService& userService, DogValidator& validator1);

    void addUi();

    void deleteUi();

    void updateUi();

    void listAll();

    void listAllUser();

    void listFilteredUser();

    void listAdoptionList();

    void openFile();

    static void printAdministratorSubmenu();

    static void printUserSubmenu();

    void AdministratorMode();

    void UserMode();

    static void printMenu();

    void start();

    ~Console();
};
#endif //A67_LAVINIA06_CONSOLE_H
