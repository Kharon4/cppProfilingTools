#include "timer.h"

#include<iostream>
timer::timer() {
	start = std::chrono::high_resolution_clock::now();
}

timer::~timer() {
    end = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << '\n';
}
