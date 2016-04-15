#include "NetworkManager.h"
#include <cstdlib>
#include <iostream>

NetworkManager::NetworkManager(const char *addr, unsigned int port)
    : addr_(addr), port_(port) { }

void NetworkManager::send(const void *buf, size_t len) {
    std::cout << "sent " << len << " bytes on " << addr_ << ':' << port_;
}

void NetworkManager::recv(void *buf, size_t len) {}

