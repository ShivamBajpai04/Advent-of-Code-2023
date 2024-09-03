// correct answer: 55291
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile("input.txt");
    // ofstream outputFile("input_modified.txt");
    string line;
    int sum = 0;
    while (getline(inputFile, line))
    {
        int a = -1, b = -1;
        for (int i = 0; i < line.size(); i++)
        {
            if (isdigit(line[i]))
            {
                if (a == -1)
                {
                    a = line[i] - '0';
                }
                b = line[i] - '0';
            }
            else
            {
                if (i + 2 < line.size() && line[i] == 'o' && line.substr(i, 3) == "one")
                {
                    if (a == -1)
                    {
                        a = 1;
                    }
                    b = 1;
                }
                if (i + 2 < line.size() && line[i] == 't' && line.substr(i, 3) == "two")
                {
                    if (a == -1)
                    {
                        a = 2;
                    }
                    b = 2;
                }
                if (i + 4 < line.size() && line[i] == 't' && line.substr(i, 5) == "three")
                {
                    if (a == -1)
                    {
                        a = 3;
                    }
                    b = 3;
                }
                if (i + 3 < line.size() && line[i] == 'f' && line.substr(i, 4) == "four")
                {
                    if (a == -1)
                    {
                        a = 4;
                    }
                    b = 4;
                }
                if (i + 3 < line.size() && line[i] == 'f' && line.substr(i, 4) == "five")
                {
                    if (a == -1)
                    {
                        a = 5;
                    }
                    b = 5;
                }
                if (i + 2 < line.size() && line[i] == 's' && line.substr(i, 3) == "six")
                {
                    if (a == -1)
                    {
                        a = 6;
                    }
                    b = 6;
                }
                if (i + 4 < line.size() && line[i] == 's' && line.substr(i, 5) == "seven")
                {
                    if (a == -1)
                    {
                        a = 7;
                    }
                    b = 7;
                }
                if (i + 4 < line.size() && line[i] == 'e' && line.substr(i, 5) == "eight")
                {
                    if (a == -1)
                    {
                        a = 8;
                    }
                    b = 8;
                }
                if (i + 3 < line.size() && line[i] == 'n' && line.substr(i, 4) == "nine")
                {
                    if (a == -1)
                    {
                        a = 9;
                    }
                    b = 9;
                }
            }
        }
        sum += 10 * a + b;
        // outputFile << 10*a+b << endl;
        // break;
    }

    inputFile.close();
    // outputFile.close();
    cout << sum << endl;
    return 0;
}
