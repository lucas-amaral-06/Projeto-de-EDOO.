#include <iostream>
#include "Paciente.h"
#include "crow.h"

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

    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "Hello, API!";
    });

    CROW_ROUTE(app, "/hello/<string>")([](std::string name){
        return "Ola, " + name + "!";
    });

    app.port(18080).multithreaded().run();

    cout << "Olá, mundo!" << endl;
    Paciente Lucas("Lucas", 18, "08937100592", "77991670521", "lukasbritoamaral007@gmail.com", "09/07/2006", "Masculino", {"Hipotireoidismo", "Nanismo"});

    return 0;
}