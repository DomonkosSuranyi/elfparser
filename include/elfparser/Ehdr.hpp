#ifndef ELFPARSER_EHDR_HPP_INC
#define ELFPARSER_EHDR_HPP_INC

#include <elfparser/elfdatatype.hpp>

namespace elf
{
    class Ehdr
    {
    public:
        unsigned char ident[16];
        elf::Elf32Half     type;
        elf::Elf32Half     machine;
        elf::Elf32Word     version;
        elf::Elf32Addr     entry;
        elf::Elf32Off      phoff;
        elf::Elf32Off      shoff;
        elf::Elf32Word     flags;
        elf::Elf32Half     ehsize;
        elf::Elf32Half     phentsize;
        elf::Elf32Half     phnum;
        elf::Elf32Half     shentsize;
        elf::Elf32Half     shnum;
        elf::Elf32Half     shstrndx;

        Ehdr();
        ~Ehdr();
    };
}
#endif
