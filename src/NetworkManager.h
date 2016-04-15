#pragma once

#include "INetworkManager.h"
#include <cstdlib>

class NetworkManager : public INetworkManager {
private:
    const char *addr_;
    unsigned int port_;

public:
    NetworkManager(const char *addr, unsigned int port);

    void send(const void *buf, size_t len) override;

    void recv(void *buf, size_t len) override;
};
