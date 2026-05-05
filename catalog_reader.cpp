#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <xmlfile>" << std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);
    std::string line;
    while (std::getline(file, line)) {
        size_t start = line.find("<title>");
        size_t end = line.find("</title>");
        if (start != std::string::npos && end != std::string::npos) {
            start += 7;
            std::cout << line.substr(start, end - start) << std::endl;
        }
    }
    std::cout<<"Pipeline test 2"<<std::endl;
    return 0;
}
