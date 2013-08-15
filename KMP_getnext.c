void getnext()
{
    int i = 1,j = 0;
    p[1] = 0;

    while(i < len)
    {
       if(j == 0 || s[j] == s[i])
       {
           ++j;
           ++i;
           p[i] = j;
       }
       else
        j = p[j];
    }
}

