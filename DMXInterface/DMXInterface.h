//
// Created by User on 04.12.2018.
//

#ifndef UNTITLED1_DMXCONTROLLER_H
#define UNTITLED1_DMXCONTROLLER_H


#include <cassert>

class DMXInterface {

public:
    virtual void send(int universe) = 0;

    DMXInterface & setValue(unsigned char value, int channel) {

        if (channel > 511) {
            throw "Channel out of range of DMX-512";
        }

        data[channel] = value;

        return * this;
    }

protected:
    unsigned char data[512] = {0};
    unsigned char * asDMXBytes() {
        return data;
    }
};


#endif //UNTITLED1_DMXCONTROLLER_H
