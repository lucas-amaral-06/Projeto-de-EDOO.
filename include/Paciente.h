#pragma once

#include <string>
#include <vector>
#include <cstdint>

class Paciente {

    public:

        // Método construtor.
        
        Paciente(const std::string& nome,
                uint8_t idade,
                const std::string& cpf,
                const std::string& celular,
                const std::string& email,
                const std::string& data_nascimento,
                const std::string& genero,
                const std::vector<std::string>& diagnosticos
        );

        // Getters (funções para captar os atributos).

        const std::string& getNome() const { return nome; }
        uint8_t getIdade() const { return idade; }
        const std::string& getCPF() const { return cpf; }
        const std::string& getCelular() const { return celular; }
        const std::string& getEmail() const { return email; }
        const std::string& getNascimento() const { return data_nascimento; }
        const std::string& getGenero() const { return genero; }
        const std::vector<std::string>& getDiagnosticos() const { return diagnosticos; }

    private:

        // Atributos sobre o usuário.

        std::string nome;
        uint8_t idade;
        std::string cpf;
        std::string celular;
        std::string email;
        std::string data_nascimento;
        std::string genero;
        std::vector<std::string> diagnosticos;
        
};