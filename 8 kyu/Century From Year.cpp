int centuryFromYear(int year)
{
  if (year < 99)
  {
    return 1;
  }
  if (year > 99)
  {
    if (year % 100 == 0)
    {
      return year / 100;
    }
    else return 1 + year / 100;
  }
}
