#include "Cypher.hpp"

Crypt::Crypt()
{
    cout << "Initializing point" << endl;
    disp = 0;
}

vector<pair<char, char>> Crypt::CreateConvTable(int disp, vector<pair<char, char>> convTable)
{
    // vector< pair<char,char >> table(256); //preinitialize, w/o push_back
    vector<pair<char, char>> table;
    for (size_t i = 0; i < 256; i++)
    {
        // pair<char,char> p(i, ' ');  //avoiding first and second indexes
        pair<char, char> p;
        p.first = i;
        p.second = p.first + disp;
        table.push_back(p);
    }

    convTable = table;
}

string Crypt::DecryptText(string input, vector<pair<char, char>> table)
{
    string result;

    for (size_t i = 0; i < input.length(); i++)
    {
        char chi = input.at(i); // input character

        for (size_t j = 0; j < table.size(); j++)
        {
            if (chi == table.at(j).second)
            {
                result += table.at(j).first;
                break;
            }
        }
    }
    return result;
}

string Crypt::EncryptText(string input, vector<pair<char, char>> table)
{
    string result;

    for (size_t i = 0; i < input.length(); i++)
    {
        char chi = input.at(i);          // input character
        char cho = table.at(chi).second; // output character
        result += cho;
    }
    return result;
}
