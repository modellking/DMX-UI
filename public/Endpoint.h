//
// Created by User on 04.12.2018.
//

#ifndef UNTITLED1_ENDPOINT_H
#define UNTITLED1_ENDPOINT_H

#include <string>

class Endpoint {
public:
    virtual std::string get(std::string[] args);
    virtual static std::string post(std::string[] args, std::string content);
    virtual std::string del(std::string[] args);
    std::string update(std::string[] args, std::string content);
};
#endif //UNTITLED1_ENDPOINT_H
