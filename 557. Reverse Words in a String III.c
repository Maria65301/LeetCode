void exchange(char *p1, char *p2)
{
    char c = *p1;
    *p1 = *p2;
    *p2 = c;
}

char* reverseWords(char* s) {
    int i,j,k;
    int l = strlen(s);
    for(i=0,j=0;i<=l;i++)
    {
        if(s[i]!=' '&&i<l)
        {
            j++;
        }
        else
        {
            k=i-j;
            j=i-1;
            while(j>k)
            {
                exchange(s+k, s+j);
                j--;
                k++;
            }
            j=0;
        }
    }
    return s;
}
