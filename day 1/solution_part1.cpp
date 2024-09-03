// correct answer: 55607
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile("input_modified.txt");
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
        }
        sum += 10 * a + b;
        // break;
    }

    inputFile.close();
    cout << sum << endl;
    return 0;
}
