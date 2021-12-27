std::string get_middle(std::string input) 
{
  std::string s;
    if (input.size() % 2 == 0)
    {
        s+= input[input.size() / 2 - 1];
        s+= input[input.size() / 2];
    }
    else s+= input[input.size() / 2];
    return s;
}
