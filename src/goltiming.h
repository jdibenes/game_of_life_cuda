
#ifndef GOLTIMING_H
#define GOLTIMING_H

#include <chrono>

namespace gol {
class timing {
private:
    std::chrono::nanoseconds m_start;
    std::chrono::nanoseconds m_stop;

public:
    void start();
    void stop();
    float ms();
};
}

#endif // GOLTIMING_H
