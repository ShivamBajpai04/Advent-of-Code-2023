//chars in input.txt = 20470
//chars in input_modified.txt = 14644
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{

    ifstream inputFile("input.txt");
    ifstream outputFile("input_modified.txt");
    string line1,line2;
    int f1=0, f2=0;
    if (inputFile.is_open() && outputFile.is_open())
    {
        while (getline(inputFile, line1))
        {
            f1+=line1.size();
        }
        while (getline(outputFile, line2))
        {
            f2+=line2.size();
        }
        inputFile.close();
        outputFile.close();
    }
    else
    {
        std::cerr << "Unable to open the file." << std::endl;
    }
    cout << f1 << " " << f2 << endl;
    return 0;
}
