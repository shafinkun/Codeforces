#include <bits/stdc++.h>

int main()
{
    std::string s;
    std::cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        std::cout << (char)toupper(s[i]);
    }
    std::cout << std::endl;

    return 0;
}