#include "cypher.hpp"
#include "convTable.hpp"

size_t menu();

int main(int argc, const char *argv[])
{
    string input = "Lorem";
    string encrypted;
    string decrypted;
    Cypher *crypter;
    int code;
    bool table = false;

    size_t option = 0;
    do
    {
        option = menu();
        if (option == 1)
        {
            if (table == true)
            {
                cout << "1. Open a new table" << endl
                     << "Enter a new student code: " << endl;
                cin >> code;

                crypter->NewConversionTable(code);
            }
            else
            {
                cout << "1. Open a new table" << endl
                     << "Enter a student code: " << endl;
                cin >> code;

                crypter = new Cypher(code);
                table = true;
            }
            continue;
        }
        if (option == 2)
        {
            if (table == false)
            {
                cout << "you don't have a table yet, go back to the menu" << endl;
            }
            else
            {
                cout << "2. Open a new table" << endl
                     << "Enter a input: " << endl;
                getline(cin >> ws, input);

                encrypted = crypter->EncryptText(input);

                cout << "The encryptText is:" << encrypted << endl;
            }
            continue;
        }
        if (option == 3)
        {
            if (table == false)
            {
                cout << "you don't have a table yet, go back to the menu" << endl;
            }
            else
            {
                cout << "3. Decrypt text" << endl
                     << "Enter a input: " << endl;
                getline(cin >> ws, input);

                decrypted = crypter->DecryptText(input);

                cout << "The decryptText is:" << decrypted << endl;
            }
            continue;
        }
        if (option == 4)
        {
            if (table == false)
            {
                cout << "you don't have a table yet, go back to the menu" << endl;
            }
            else
            {
                cout << "4. Show table" << endl;
                crypter->ShowInfo();
            }
            continue;
        }
        if (option == 5)
        {
            cout << "5. Exit" << endl;
            delete crypter;
            break;
        }
        if (option != 1 || option != 2 || option != 3 || option != 4 || option != 5)
        {
            cout << "Please chose a valid number" << endl;
            continue;
        }
    } while (option != 5);
    return 0;
}

size_t menu()
{
    size_t option;

    cout << "-------------------------------------------------" << endl
         << "FILE MANIPULATOR HACK" << endl
         << "1. Open a new table" << endl
         << "2. Encrypt text" << endl
         << "3. Decrypt text" << endl
         << "4. Show table" << endl
         << "5. Exit" << endl
         << "-------------------------------------------------" << endl
         << "Option:";
    cin >> option;

    return option;
}