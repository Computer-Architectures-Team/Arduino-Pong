#include "ScoreManager.h"

ScoreManager::ScoreManager(INetworkManager* network)
    : network_manager_(network) {}

void ScoreManager::add_session(Session& session) {
    sessions_.push(session);
}

void ScoreManager::upload_sessions() {
    while (!sessions_.empty()) {
        Session curr_session = sessions_.front();
        const char* serialized_session = curr_session.serialize().c_str();
        network_manager_->send(serialized_session, sizeof(serialized_session));

        sessions_.pop();
    }
}
