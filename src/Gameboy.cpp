#include "Gameboy.h"

Gameboy::Gameboy() : m_Running(true)
{
    
}

void Gameboy::run()
{
    while(m_Running)
    {
        uint16_t instruction = fetch();
        decodeExecute(instruction);
    }
}

uint16_t Gameboy::fetch()
{
    return 0;
}

void Gameboy::decodeExecute(uint16_t instruction)
{

}