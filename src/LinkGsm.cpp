#include <LinkGsm.h>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <thread>

using namespace std::string_literals;

LinkGsm::LinkGsm() : linkReliability_{config<int>("linkReliability"s)} {                                      // reliability configured in json
    std::cout << type() << "{"s << id() << ", linkReliability "s << linkReliability_ << "%}"s << std::endl;   // log construction
    std::srand(std::time(nullptr));
}
LinkGsm::~LinkGsm() { std::cout << "~"s << type() << "{"s << id() << "}"s << std::endl; }   // log destruction

bool LinkGsm::send(const std::string &message) {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));   // simulate delay
    bool success = (std::rand() % 100) < linkReliability_;         // randomize success

    if (success) {   // log sending
        std::cout << "send ok,     "s;
    } else {
        std::cout << "send failed, "s;
    }
    std::cout << "via "s << id() << ", "s << message << std::endl;

    return success;
}
