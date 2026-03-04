#ifndef GAMEBOY
#define GAMEBOY

#include <cstdint>

class Gameboy
{
  public:
    Gameboy();

    void run();

    private:
    bool m_Running;

    uint16_t fetch();
    void decodeExecute(uint16_t instruction);
};

#endif