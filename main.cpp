#include "Cypher.hpp"

int main()
{
    string input = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    vector<pair<char, char>> convTable;
    vector<pair<char, char>> table;

    Crypt student1;

    student1.CreateConvTable(10, convTable);

    for (size_t i = 0; i < convTable.size(); i++)
    {
        char orig = convTable.at(i).first;
        char dest = convTable.at(i).second;

        cout << " Orig: " << (char)orig << " - " << (int)orig << " -> "
             << " Destino: " << (char)dest << " - " << (int)dest << endl;
    }

    string encrypted;
    encrypted = student1.EncryptText(input, convTable);
    cout << "Original text: " << input << endl;
    cout << "--------------------------------" << endl;
    cout << "Encrypted text: " << encrypted << endl;

    string decrypted;
    decrypted = student1.DecryptText(encrypted, convTable);
    cout << "--------------------------------" << endl;
    cout << "Reverted text: " << decrypted << endl;

    return 0;
};