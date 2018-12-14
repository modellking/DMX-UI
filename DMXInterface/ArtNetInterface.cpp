//
// Created by User on 04.12.2018.
//

#include "ArtNetInterface.h"
#include <>
#include <algorithm>

ArtNetInterface::ArtNetInterface() = default;

void ArtNetInterface::send(int universe) {

    auto universe_16 = (__int16) universe;

    unsigned char fullData [18 + 512] = {
            'A','r','t','-','N','e','t',0x00, // Art-Net\0
            0x50,0x00, // Op-Code ArtDMX 0x5000
            0x00,0x0E, // Version 14
            0x00, // Sequence number 0x00: disable; any other: for reordering lost packets
            0x50, // informational only (physical input port) using 80 because why not
            (unsigned char) (universe_16 / 256), (unsigned char) (universe_16 % 256), // universe
            0x02, 0x00 // Length 512
    };

    std::copy(data, data + 512, fullData + 18);


}