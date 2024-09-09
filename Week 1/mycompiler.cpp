#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    // Check if the file name is provided
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }

    std::string filename = argv[1];
    std::ifstream infile(filename);

    // Check if the file was opened successfully
    if (!infile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << "\n";
        return 1;
    }

    std::string line;
    // Read and process the file line by line
    while (std::getline(infile, line)) {
        std::cout << line << '\n'; // For demonstration, simply output the line
    }

    infile.close();
    return 0;
}
