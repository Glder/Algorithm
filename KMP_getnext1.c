int i = 1,j = 0;
p[1] = 0;
for(i = 2; i <= len; i++)
    {
        while(j > 0 && s[j+1] != s[i])
            j = p[j];
        if(s[j+1] == s[i])
            j++;
        p[i] = j;
    }
