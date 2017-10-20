#include <elfparser/Elf.hpp>

#include <fstream>
#include <iterator>

using namespace elf;

Elf::Elf(std::string elfFilePath)
{
    m_elfBinary = readFile(elfFilePath);
    Ehdr header(m_elfBinary);
}

Elf::~Elf()
{

}

std::vector<byte> Elf::readFile(std::string path)
{
    std::ifstream file(path, std::ios::binary);
    file.unsetf(std::ios::skipws);

    std::streampos fileSize;
    file.seekg(0, std::ios::end);
    fileSize = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<byte> retVector;
    retVector.reserve(fileSize);

    retVector.insert(retVector.begin(),
                     std::istream_iterator<byte>(file),
                     std::istream_iterator<byte>());
    return retVector;
}
