#pragma once

#include "Globals.h"
#include "Session.h"

class IScoreManager {
    public:
        virtual void add_session(Session& session) = 0;

        virtual void upload_sessions() = 0;
};
