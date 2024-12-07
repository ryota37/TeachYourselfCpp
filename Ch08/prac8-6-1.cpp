// Output any message you like to the file as binary data, then read it back as binary data.
// Check if the data is the same as the original message.

#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out("test.dat", std::ios::binary);
    if (!out) {
        std::cerr << "Cannot open file." << std::endl;
        return 1;
    }

    char message[] = "Hello, World!";
    out.write(message, sizeof(message));
    out.close();

    std::ifstream in("test.dat", std::ios::binary);
    if (!in) {
        std::cerr << "Cannot open file." << std::endl;
        return 1;
    }

    char readMessage[sizeof(message)];
    in.read(readMessage, sizeof(message));
    in.close();

    if (std::string(message) == std::string(readMessage)) {
        std::cout << "The data is the same." << std::endl;
    } else {
        std::cout << "The data is different." << std::endl;
    }

    return 0;
}