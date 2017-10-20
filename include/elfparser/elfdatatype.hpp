#ifndef ELFPARSER_ELFDATATYPE_HPP_INC
#define ELFPARSER_ELFDATATYPE_HPP_INC

#include <cstdint>

namespace elf
{
    typedef uint64_t Elf32Addr;
    typedef uint32_t Elf32Half;
    typedef uint64_t Elf32Off;
    typedef int64_t  Elf32Sword;
    typedef uint64_t Elf32Word;
}
#endif
