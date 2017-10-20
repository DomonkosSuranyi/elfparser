#ifndef ELFPARSER_ELF_HPP_INC
#define ELFPARSER_ELF_HPP_INC

#include <string>
#include <vector>

namespace elf
{
    typedef unsigned char byte;

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
