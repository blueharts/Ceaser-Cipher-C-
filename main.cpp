#include <iostream>
#include <string>

void ClearScr()
{
    system("cls");
    std::cout << "C++ ENCRYPTER. FREE FOR COMMERCIAL AND PERSONAL USE.\n"
              << "VERSION: V1.05\n\n";
}


void Encrypter()
{
    std::string EncCommand;
    std::string Message;
    int Shift = 3;

    std::cout << "C++ ENCRYPTER. FREE FOR COMMERCIAL AND PERSONAL USE.\n"
              << "VERSION: V1.05\n\n";

    while (true)
    {
        std::cout << "ENCRYPTER > ";
        std::getline(std::cin >> std::ws, EncCommand);

        if (EncCommand == "exit")
        {
            break;
        }
        else if (EncCommand == "clear")
        {
            ClearScr();
        }
        else if (EncCommand == "help")
        {
            std::cout << "\nHELP | COMMANDS: \n"
                      << "[0]  | EXIT:  EXIT\n"
                      << "[1]  | CLEAR: CLEAR SCREEN"
                      << "[2]  | ENC:   ENCRYPT\n"
                      << "[3]  | DEC:   DECRYPT\n"
                      << "[4]  | ED:    DO BOTH\n\n";
        }
        else if (EncCommand == "enc")
        {
            std::cout << "ENTER YOUR MESSAGE > ";
            std::getline(std::cin, Message);

            for (char &Enc : Message)
            {
                if (Enc >= 'a' && Enc <= 'z')
                {
                    Enc += Shift;
                    if (Enc > 'z') Enc -= 26;
                }
                else if (Enc >= 'A' && Enc <= 'Z')
                {
                    Enc += Shift;
                    if (Enc > 'Z') Enc -= 26;
                }
            }
            std::cout << "\nENCRYPTED: " << Message << "\n\n";
        }
        else if (EncCommand == "dec")
        {
            std::cout << "ENTER YOUR ENCRYPTED MESSAGE > ";
            std::getline(std::cin, Message);

            for (char &Enc : Message)
            {
                if (Enc >= 'a' && Enc <= 'z')
                {
                    Enc -= Shift;
                    if (Enc < 'a') Enc += 26;
                }
                    else if (Enc >= 'A' && Enc <= 'Z')
                {
                    Enc -= Shift;
                    if (Enc < 'A') Enc += 26;
                }
            }
            std::cout << "\nDECRYPTED: " << Message << "\n\n";
        }
        else if (EncCommand == "ed")
        {
            std::cout << "ENTER YOUR MESSAGE > ";
            std::getline(std::cin, Message);

            for (char &Enc : Message)
            {
                if (Enc >= 'a' && Enc <= 'z')
                {
                    Enc += Shift;
                    if (Enc > 'z') Enc -= 26;
                }
                else if (Enc >= 'A' && Enc <= 'Z')
                {
                    Enc += Shift;
                    if (Enc > 'Z') Enc -= 26;
                }
            }
            std::cout << "\nENCRYPTED: " << Message << "\n";

            for (char &Enc : Message)
            {
                if (Enc >= 'a' && Enc <= 'z')
                {
                    Enc -= Shift;
                    if (Enc < 'a') Enc += 26;
                }
                    else if (Enc >= 'A' && Enc <= 'Z')
                {
                    Enc -= Shift;
                    if (Enc < 'A') Enc += 26;
                }
            }
            std::cout << "DECRYPTED: " << Message << "\n\n";
        }
        else
        {
            std::cout << "\nCOMMAND | NOT RECOGNIZED.\n"
                      << "        | AVAILABLE COMMANDS:\n"
                      << "[0]     | EXIT:      EXIT\n"
                      << "[1]     | CLEAR:     CLEAR\n"
                      << "[2]     | ENC:       ENCRYPT\n"
                      << "[3]     | DEC;       DECRYPT\n"
                      << "[4]     | ED:        DO BOTH\n\n";
        }
    }
}

int main()
{
    Encrypter();
    return 0;
}
