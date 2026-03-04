#include "Gameboy.h"

Gameboy::Gameboy()
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

}

void Gameboy::decodeExecute(uint16_t instruction)
{

}