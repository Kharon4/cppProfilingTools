#pragma once

#include <chrono>

class timer {
private:
    std::chrono::time_point<std::chrono::steady_clock> start, end;
public:
    timer();
    ~timer();
};