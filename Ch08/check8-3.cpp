// From a file, input approximately 100 bytes as a block.
// The input should be binary data.

#include <iostream>
#include <fstream>
#include <string>

void createFile(const std::string& filename) {
    std::ofstream file{filename, std::ios::binary};

    if (!file) {
        std::cerr << "File creation error\n";
        return;
    }

    // 100バイト以上のデータを書き込む
    for (int i = 0; i < 150; ++i) {
        file.put(static_cast<char>(i % 256));
    }

    file.close();
    std::cout << "File '" << filename << "' created with over 100 bytes of data." << std::endl;
}

void readFile(const std::string& filename) {
    std::ifstream file{filename, std::ios::binary};

    if (!file) {
        std::cerr << "File open error\n";
        return;
    }

    char buffer[100];
    file.read(buffer, 100);

    for (int i = 0; i < 100; ++i) {
        std::cout << buffer[i];
    }
    std::cout << std::endl;

    file.close();
}

int main()
{
    std::string filename = "testfile.bin";

    // ファイルを作成
    createFile(filename);

    // ファイルを読み込む
    readFile(filename);

    return 0;
}

