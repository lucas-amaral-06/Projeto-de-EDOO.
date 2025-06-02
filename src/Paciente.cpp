#include "Paciente.h"
#include <vector>
#include <string>

// Método construtor da classe.
Paciente::Paciente(const std::string& nome, 
                   uint8_t idade, 
                   const std::string& cpf, 
                   const std::string& celular, 
                   const std::string& email,
                   const std::string& data_nascimento,
                   const std::string& genero,
                   const std::vector<std::string>& diagnosticos){
    this->nome = nome;
    this->idade = idade;
    this->cpf = cpf;
    this->celular = celular;
    this->email = email;
    this->data_nascimento = data_nascimento;
    this->genero = genero;
    this->diagnosticos = diagnosticos;
}

