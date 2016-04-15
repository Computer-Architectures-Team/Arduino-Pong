#pragma once

#include "IScoreManager.h"
#include "INetworkManager.h"
#include "Session.h"
#include <queue>

class ScoreManager : public IScoreManager {
    private:
        std::queue<Session> sessions_;
        INetworkManager* network_manager_;

    public:
        ScoreManager(INetworkManager* manager);

        void add_session(Session& session) override;

        void upload_sessions() override;
};
