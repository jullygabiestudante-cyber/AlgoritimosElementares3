cmake_minimum_required(VERSION 3.20)
project(ed_2AlgoritmoElementares3)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Função para criar executáveis a partir dos arquivos .cpp
function(adicionar_exercicios PASTA PREFIXO)
    file(GLOB ARQUIVOS CONFIGURE_DEPENDS
            "${CMAKE_CURRENT_SOURCE_DIR}/${PASTA}/*.cpp"
    )

    foreach(ARQUIVO IN LISTS ARQUIVOS)
        get_filename_component(NOME ${ARQUIVO} NAME_WE)

        add_executable(
                ${PREFIXO}_${NOME}
                ${ARQUIVO}
        )
    endforeach()
endfunction()

# Exercícios
adicionar_exercicios("src" "Ativ")

