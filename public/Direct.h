//
// Created by User on 04.12.2018.
//

#ifndef UNTITLED1_DIRECT_H
#define UNTITLED1_DIRECT_H

#include <string>
#include "Endpoint.h"
#include "../DMXInterface/DMXInterface.h"

class Direct : public Endpoint {
public:
    explicit Direct(DMXInterface controller);
    static std::string post(std::string[] args, std::string content);
};


#endif //UNTITLED1_DIRECT_H
