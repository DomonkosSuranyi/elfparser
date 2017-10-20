#include <elfparser/Ehdr.hpp>

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
