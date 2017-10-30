#include <elfparser/Elf.hpp>

#include <fstream>
#include <iterator>

using namespace elf;

Elf::Elf(std::string elfFilePath)
        : m_elfBinary(readFile(elfFilePath))
{
    Ehdr header(m_elfBinary);
}

Elf::~Elf()
{

}

std::vector<byte> Elf::readFile(std::string path)
{
    std::ifstream file(path, std::ios::binary);
    if(!file.good())
        throw std::invalid_argument("Could not open file");

    std::vector<byte> retVector((
            std::istreambuf_iterator<char>(file)),
            (std::istreambuf_iterator<char>()));
    return retVector;
}
