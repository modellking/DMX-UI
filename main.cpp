#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio.hpp>
#include <boost/filesystem.hpp>
#include <iostream>
#include "DMXInterface/ArtNetInterface.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    ArtNetInterface ANI;
    ANI.setValue(0,0).send(0);
    return 0;
}