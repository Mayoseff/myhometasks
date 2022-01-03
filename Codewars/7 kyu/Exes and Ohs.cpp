bool XO(const std::string& str)
{
  std::string s;
    s = str;
    int xs = 0;
    int os = 0;
    while (s.find_first_of("xXoO") != -1)
    {
        if (s.find_first_of("xX") != -1)
        {
            ++xs;
            s[s.find_first_of("xX")] = '\0';
        }
        else 
        {
            ++os;
            s[s.find_first_of("oO")] = '\0';
        }
    }
    if (xs == os)
        return true;
    if (xs != os)
        return false;
}
© 2022 G
