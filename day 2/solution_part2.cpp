// correct answer: 69929
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void skip(string line, int &i)
{
    while (line[i] == ' ' || line[i] == ',' || line[i] == ';')
    {
        i++;
    }
}

int main()
{
    ifstream inputFile("input.txt");
    string line;
    int sum = 0;
    int lineCount = 1;
    while (getline(inputFile, line))
    {
        // PRINT CONTENTS OF THE FILE
        //  std::cout << line << endl;
        int red = 0, green = 0, blue = 0;
        int i = 0;
        while (i < line.size())
        {
            int num = 0;

            while (i < line.size() && isdigit(line[i]))
            {
                num = num * 10 + line[i] - '0';
                i++;
            }
            skip(line, i);

            if (i + 2 < line.size() && line[i] == 'r' && line.substr(i, 3) == "red")
            {
                red = max(red, num);
                i += 3;
            }
            skip(line, i);
            if (i + 4 < line.size() && line[i] == 'g' && line.substr(i, 5) == "green")
            {
                green = max(green, num);
                i += 5;
            }
            skip(line, i);
            if (i + 3 < line.size() && line[i] == 'b' && line.substr(i, 4) == "blue")
            {
                blue = max(blue, num);
                i += 4;
            }
            skip(line, i);
        }
        
            // cout<<red<<" "<<green<<" "<<blue<<endl;
            sum += green*blue*red;
            // cout << lineCount << endl;
        
        // std::cout << lineCount << endl;
        lineCount++;
    }

    inputFile.close();
    // std::cout << lineCount << endl;
    std::cout << sum << endl;
    return 0;
}
