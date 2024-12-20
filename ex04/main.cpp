#include <iostream>
#include <fstream>
#include <string>

int replaceOccurrences(const std::string& filename, const std::string& s1, const std::string& s2)
{
    char	    ch;
	int		    i;
    std::string buffer;

    if (s1.empty()) {
        std::cerr << "Error: The string to replace (s1) cannot be empty." << std::endl;
        return (0);
    }

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open file '" << filename << "'." << std::endl;
        return (0);
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not create output file '" << outputFilename << "'." << std::endl;
        inputFile.close();
        return (0);
    }

	i = 0;
    while (inputFile.get(ch)) {
        buffer += ch;
		if (buffer[i] != s1[i])
		{
			outputFile << buffer;
			buffer.clear();
			i = 0;
		}
		else if (buffer.size() == s1.size())
		{
			outputFile << s2;
			buffer.clear();
			i = 0;
		}
		else
			i++;
    }
    outputFile << buffer;
    inputFile.close();
    outputFile.close();
    return (1);
}

int main(int argc, char* argv[])
{
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (!replaceOccurrences(filename, s1, s2))
        return (1);
    return 0;
}
