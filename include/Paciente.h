#pragma once

#include <string>

class Paciente {

    public:

        Paciente(const std::string& nome, uint8_t idade, const std::string& cpf);
        void exibirInformacoes() const;
        void setIdade(uint8_t novaIdade);
        uint8_t getIdade() const;

    private:

        std::string nome;
        uint8_t idade;
        std::string cpf;
        
};