#pragma once

#include <cstdlib>

class INetworkManager {
    public:
        virtual ~INetworkManager() { }

        virtual void send(const void *buf, size_t len) = 0;

        virtual void recv(void *buf, size_t len) = 0;
};
