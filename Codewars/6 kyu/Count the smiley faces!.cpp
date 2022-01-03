int countSmileys(std::vector<std::string> arr)
{

    int c = 0;

    std::string x;

    for (int i = 0; i < arr.size(); ++i)
    {
        x = arr[i];
        if (x.size()==3)
          {
            if (x[0] == ':' || x[0] == ';')
              if (x[1] == '-' || x[1] == '~')
                if (x[2] == ')' || x[2] == 'D')
                  ++c;
          }
      
      if (x.size()==2)
        {
          if (x[0] == ':' || x[0] == ';')
              if (x[1] == ')' || x[1] == 'D')
                ++c;
        }
    }

    return c;
}
