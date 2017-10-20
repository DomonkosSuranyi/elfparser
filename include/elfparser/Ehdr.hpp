#ifndef ELFPARSER_EHDR_HPP_INC
#define ELFPARSER_EHDR_HPP_INC

#include <elfparser/elfdatatype.hpp>
#include <elfparser/ElfStdElement.hpp>

namespace elf
{
    class Ehdr : ElfStdElement
    {
    public:
        unsigned char ident[16];
        Elf32Half     type;
        Elf32Half     machine;
        Elf32Word     version;
        Elf32Addr     entry;
        Elf32Off      phoff;
        Elf32Off      shoff;
        Elf32Word     flags;
        Elf32Half     ehsize;
        Elf32Half     phentsize;
        Elf32Half     phnum;
        Elf32Half     shentsize;
        Elf32Half     shnum;
        Elf32Half     shstrndx;

        Ehdr(std::vector<byte>);
        ~Ehdr();
      protected:
        void parse(std::vector<byte>);
      private:
        void parseIdent(byte[]);
    };
}
#endif
