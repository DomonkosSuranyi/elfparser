set(SOURCE_FILES
    Elf.cpp
    Ehdr.cpp
    )

message("--> LIBS: ${LIBS}")

add_library(elfparser SHARED ${SOURCE_FILES})
target_link_libraries(elfparser ${LIBS})

list(APPEND LIBS elfparser)

install(TARGETS elfparser DESTINATION lib)
