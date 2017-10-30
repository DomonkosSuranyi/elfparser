#include <elfparser/Elf.hpp>

#include <igloo/igloo_alt.h>

#define INVALID_ELF_PATH "resources/invalid.elf"

using namespace igloo;

Describe(aElf)
{
    It(throws_exception_when_invalid_elf_parsed)
    {
        elf::Elf(INVALID_ELF_PATH);
        //AssertThrows(std::invalid_argument, elf::Elf(INVALID_ELF_PATH));
    }
};
