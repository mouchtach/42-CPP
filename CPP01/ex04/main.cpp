#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string line;
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }
    std::ifstream input_file(filename);
    if (!input_file)
    {
        std::cerr << "Error: cannot open file " << filename << std::endl;
        return 1;
    }
    std::ofstream output_file(filename + ".replace");
    if (!output_file)
    {
        std::cerr << "Error: cannot create output file." << std::endl;
        return 1;
    }
    while (std::getline(input_file, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        output_file << line;
        if (!input_file.eof())
            output_file << '\n';
    }
    input_file.close();
    output_file.close();
    std::cout << "✅ File '" << filename << ".replace' created successfully!" << std::endl;
    return 0;
}
