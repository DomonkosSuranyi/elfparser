#include <elfparser/Ehdr.hpp>
#include <goodies/enforce.hpp>

#include <stdexcept>

#define ELF_MAGIC {0x7F, 'E', 'L', 'F'}
using namespace elf;

Ehdr::Ehdr(const std::vector<byte> &elfBinary)
{
    parse(elfBinary);
}

Ehdr::~Ehdr()
{}

void Ehdr::parse(const std::vector<byte> &elfBinary)
{
    ENFORCE(elfBinary.size() > 0, "The given vector is empty");
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
