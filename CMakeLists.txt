cmake_minimum_required(VERSION 3.28)

project(BasicBlockchainSimulator)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include directories for OpenSSL
include_directories(/usr/local/opt/openssl/include)

# Add your source files
set(SOURCES
        main.cpp
        Blockchain.cpp
        Block.cpp
)

# Link the OpenSSL libraries
link_directories(/usr/local/opt/openssl/lib)

add_executable(main ${SOURCES})

# Link OpenSSL
target_link_libraries(main ssl crypto)
