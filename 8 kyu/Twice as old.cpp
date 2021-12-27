int twice_as_old(double dad, double son)
{
    int k = 0;
    if (dad > son && son > 0)
    {
        if (dad / son == 2)
            return 0;
        if (dad / son < 2)
        {
            while (dad / son != 2 && son>0)
            {
                --dad;
                --son;
                ++k;
            }
            if (son > 0)
                return k;
            else return -1;
        }
        if (dad / son > 2)
        {
            while (dad / son != 2)
            {
                ++dad;
                ++son;
                ++k;
            }
            return k;
        }
    }
    if(dad < son)
        return -1;
    if(son == 0)
        return dad;
}
