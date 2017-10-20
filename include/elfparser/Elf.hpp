#ifndef ELFPARSER_ELF_HPP_INC
#define ELFPARSER_ELF_HPP_INC

#include <string>
#include <elfparser/Ehdr.hpp>

namespace elf
{
    class Elf
    {
      public:
        std::vector<byte> m_elfBinary;

        Elf(std::string);
        ~Elf();

      private:
        std::vector<byte> readFile(std::string);
    };
}
#endif
