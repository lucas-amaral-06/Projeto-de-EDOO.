cmake_minimum_required(VERSION 3.10)
project(PROJETO_EDOO)

# Configuração de saída
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)   # Bibliotecas estáticas (.a)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)   # Bibliotecas dinâmicas (.so)

# Inclui diretórios
include_directories(include)

# Adiciona executável (compila TODOS os .cpp em /src)
file(GLOB SRC_FILES "src/*.cpp")  # Captura automaticamente todos os arquivos .cpp
add_executable(projeto_edoo ${SRC_FILES})