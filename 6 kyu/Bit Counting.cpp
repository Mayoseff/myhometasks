unsigned int countBits(unsigned long long n)
{
    unsigned long long x = n;
    int k = 0;

    while (x > 0)
    {
        if (x % 2 != 0)
             ++k;
        x /= 2;
    }
    return k;
}
