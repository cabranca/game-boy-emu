#ifndef GAMEBOY_CPU
#define GAMEBOY_CPU

#include <memory>

class ALU;
class Bus;
class ControlUnit;
class IDU;
class RegisterFile;

class CPU
{
    public:
        CPU();

        private:
        std::unique_ptr<ALU> m_ALU;
        std::unique_ptr<Bus> m_DataBus;
        std::unique_ptr<Bus> m_AddressBus;
        std::unique_ptr<ControlUnit> m_ControlUnit;
        std::unique_ptr<IDU> m_IDU;
        std::unique_ptr<RegisterFile> m_RegisterFile;
};

#endif
