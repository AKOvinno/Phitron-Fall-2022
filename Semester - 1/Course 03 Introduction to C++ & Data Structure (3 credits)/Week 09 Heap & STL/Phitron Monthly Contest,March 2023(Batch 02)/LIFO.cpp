#include <iostream>
#include <string>

bool isValidBracketSequence(const std::string& s)
{
    int count = 0;
    for (char c : s)
    {
        if (c == '{')
        {
            count++;
        }
        else if (c == '}')
        {
            if (count <= 0)
            {
                return false;
            }
            count--;
        }
    }
    return count == 0;
}

int main()
{
    std::string s;
    std::cin >> s;
    if (isValidBracketSequence(s))
    {
        std::cout << s.size() << "\n";
    }
    else
    {
        std::cout << "0\n";
    }
    return 0;
}
