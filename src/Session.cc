#include "Session.h"
#include <sstream>

Session::Session() : size_(0) {}

void Session::start() {
    start_ = time(0);
}

void Session::end() {
    end_ = time(0);
}

int Session::get_size() const {
    return entries_.size();
}

void Session::add_score(std::pair<uint8_t, uint8_t> score) {
    entries_[size_++] = score;
}

std::string Session::serialize() const {
    std::stringstream s;
    for (int i = 0; i < size_; i++) {
        s << (char)entries_[i].first << ' ' << (char)entries_[i].second << std::endl;
    }

    return s.str();
}
