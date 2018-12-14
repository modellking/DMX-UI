//
// Created by User on 04.12.2018.
//

#ifndef UNTITLED1_ARTNETCONTROLLER_H
#define UNTITLED1_ARTNETCONTROLLER_H

#include "DMXInterface.h"


class ArtNetInterface : public DMXInterface {
public:
    ArtNetInterface();
    void send(int universe) override;
};


#endif //UNTITLED1_ARTNETCONTROLLER_H
