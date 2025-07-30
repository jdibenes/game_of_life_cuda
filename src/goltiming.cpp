
#include "goltiming.h"

namespace gol {
void timing::start() {
    m_start = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::system_clock::now().time_since_epoch());
}

void timing::stop() {
    m_stop  = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::system_clock::now().time_since_epoch());
}

float timing::ms() {
    return (m_stop - m_start).count() / 1000000000.0f;
}
}
