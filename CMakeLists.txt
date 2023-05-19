cmake_minimum_required(VERSION 3.21)
project(a67_lavinia06)

set(CMAKE_CXX_STANDARD 14)

add_executable(a67_lavinia06 main.cpp domain/domain.h domain/domain.cpp repository/repository.h repository/repository.cpp repository/userrepository.cpp repository/userrepository.h repository/CSVrepository.cpp repository/CSVrepository.h repository/HTMLrepository.cpp repository/HTMLrepository.h service/service.h service/service.cpp service/userservice.cpp service/userservice.h validators/validator.cpp validators/validator.h console/console.cpp console/console.h)