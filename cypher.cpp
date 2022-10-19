#include "cypher.hpp"
#include "convTable.hpp"

Cypher::Cypher()
{
    cout << "initializing person" << endl;

    m_input = NULL;
}

Cypher::Cypher(string input) : Cypher()
{
    this->m_input = new string;
    *this->m_input = input;
    int num = 1;

    ConvertTable = new ConvTable();

    Table = ConvertTable->CreateTable(num);
    ConvertTable->ShowInfo(Table);
}

Cypher::~Cypher()
{
    cout << "destructor called" << endl;

    if (m_input)
        delete m_input;
    if (ConvertTable)
        delete ConvertTable;
}

void Cypher::ShowInfo()
{
    if (m_input)
    {
        cout << "input: " << *this->m_input << endl;
    }
}

string Cypher::EncryptText(string input)
{
    string result;
    for (size_t i = 0; i < input.length(); i++)
    {
        char chi = input.at(i);                // input character
        char cho = this->Table.at(chi).second; // output character
        result += cho;
    }
    return result;
};

string Cypher::DecryptText(string input)
{
    string result;
    for (size_t i = 0; i < input.length(); i++)
    {
        char chi = input.at(i); // input character
        for (size_t j = 0; j < Table.size(); j++)
        {
            if (chi == Table.at(j).second)
            {
                result += Table.at(j).first;
                break;
            }
        }
    }
    return result;
}

// string Cypher::callEncryptText()
// {
//     string word;
//     word = EncryptText();
//     return word;
// }
