#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "ConversionTable.cpp"

using namespace std;

class Crypt
{
    // atributos -> estados(variaveis)
private:
    int disp;
    // metodos -> comportamentos(funções)
public:
    // constructor
    Crypt(); // sempre com o mesmo nome da classe(sem retorno)

    // metodos de acesso -- Getters and Setters
    // Setters - atualizar o conteudo das variaveis 'membros' criadas
    vector<pair<char, char>> Crypt::CreateConvTable(int, vector<pair<char, char>>);
    string Crypt::DecryptText(string, vector<pair<char, char>>);
    string Crypt::EncryptText(string, vector<pair<char, char>>);

    // Getters
};

#endif