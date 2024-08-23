#include <iostream>
#include <fstream>
#include <string>

int main() {
    /*std::string input;
    std::cin >> input;*/
    std::ifstream inputFile("C:/Users/lukef/Downloads/mutant-menace-fallout-commander-20240317-141444.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = line.find('(');
        if (pos != std::string::npos) {
            line = line.substr(0, pos);
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Processing complete!" << std::endl;
    return 0;
}
