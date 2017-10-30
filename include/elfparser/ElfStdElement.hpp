#ifndef ELFPARSER_ELFSTDELEMENT_HPP_INC
#define ELFPARSER_ELFSTDELEMENT_HPP_INC

#include <vector>

namespace elf
{
    typedef uint8_t byte;

    class ElfStdElement
    {
      public:
        ElfStdElement(){}
        ~ElfStdElement(){}
      protected:
        void parse(std::vector<byte>);
    };
}
#endif
