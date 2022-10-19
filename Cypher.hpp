#ifndef CYPHER_HPP
#define CYPHER_HPP

#include <iostream>
#include <vector>
#include "convTable.hpp"

using namespace std;

class Cypher
{
private:
    string *m_input;
    vector<pair<char, char>> Table;
    string *encrypted;
    string *decrypted;
    ConvTable *ConvertTable;

public:
    Cypher();
    Cypher(string input);

    ~Cypher();

    void ShowInfo();
    string EncryptText(string);
    string DecryptText(string);
    // string callEncryptText();
};

#endif
