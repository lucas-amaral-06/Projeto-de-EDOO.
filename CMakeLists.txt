cmake_minimum_required(VERSION 3.10)
project(MeuProjeto)

# Define onde os executáveis serão gerados
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Define onde os arquivos intermediários serão gerados
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

# Adiciona o executável
add_executable(meu_programa 
    src/main.cpp
    src/Paciente.cpp
)

# Se houver includes adicionais
target_include_directories(meu_programa PRIVATE include/)