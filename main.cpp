#include "cypher.hpp"
#include "convTable.hpp"

int main(int argc, const char *argv[])
{
    string input = "Lorem";
    string encrypted;
    string decrypted;

    Cypher *crypter = new Cypher(input);

    crypter->ShowInfo();

    encrypted = crypter->EncryptText(input);
    cout << "Original text: " << input << endl;
    cout << "--------------------------------" << endl;
    cout << "Encrypted text: " << encrypted << endl;

    delete crypter;

    return 0;
}
