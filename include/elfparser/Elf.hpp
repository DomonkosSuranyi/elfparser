#ifndef ELFPARSER_ELF_HPP_INC
#define ELFPARSER_ELF_HPP_INC

#include <string>
#include <elfparser/Ehdr.hpp>

namespace elf
{
    class Elf
    {
      public:
        Elf(std::string);
        ~Elf();

      private:
        const std::vector<byte> m_elfBinary;
        std::vector<byte> readFile(std::string);
    };
}
#endif
