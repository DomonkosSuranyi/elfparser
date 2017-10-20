#include <elfparser/Ehdr.hpp>

#include <stdexcept>

#define ELF_MAGIC {0x7F, 'E', 'L', 'F'}
using namespace elf;

Ehdr::Ehdr(std::vector<byte> elfBinary)
{
    parse(elfBinary);
}

Ehdr::~Ehdr()
{}

void Ehdr::parse(std::vector<byte> elfBinary)
{
    std::copy(elfBinary.begin(), elfBinary.begin()+16, ident);
}

void Ehdr::parseIdent(byte ident[])
{
    byte magic[] = ELF_MAGIC;
    for(int i = 0 ; i < 4 ; ++i)
    {
        if(ident[i] != magic[i])
            throw std::invalid_argument("The given binary is not a valid ELF file!");
    }
}
