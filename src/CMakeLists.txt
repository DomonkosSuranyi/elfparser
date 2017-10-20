set(SOURCE_FILES
    Elf.hpp
    )

message("--> LIBS: ${LIBS}")

add_library(elfparser SHARED ${SOURCE_FILES})
target_link_libraries(elfparser ${LIBS})
install(TARGETS elfparser DESTINATION lib)
