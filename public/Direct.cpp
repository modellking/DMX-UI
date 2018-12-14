#include <utility>

//
// Created by User on 04.12.2018.
//

#include "Direct.h"
#include <string>
#include <regex>

DMXInterface cInterface;

Direct::Direct(DMXInterface controller) {
    cInterface = controller;
}

std::string Direct::post(std::string[] args, std::string content) {
    // post DMX command

    int value = 0; // regexfind /value" ?: ?"([0-9]+)"/
    int channel = 0; // and /channel" ?: ?"([0-9]+)"/
    int universe = 0; // and /universe" ?: ?"([0-9]+)"/
    cInterface.setValue((unsigned char) value, channel).send(universe);
}
