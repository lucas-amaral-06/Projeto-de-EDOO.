#include <iostream>
#include "Paciente.h"

using namespace std;

int main(){

    /*
        Ordem dos parâmetros:

            - Nome;
            - Idade;
            - CPF;
            - Celular;
            - Email;
            - Data de Nascimento;
            - Gênero;
            - Diagnósticos.
    */

    Paciente Lucas("Lucas", 18, "08937100592", "77991670521", "lukasbritoamaral007@gmail.com", "09/07/2006", "Masculino", {"Hipotireoidismo", "Nanismo"});

    return 0;
}