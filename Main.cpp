string minNumber(string n, int a, int b)
{
     if(a==b) return "empty";
    for(int i=0; i<a-1; i++)
    {
        if(b==0) break;
        if(n[i]>n[i+1])
        {
            n.erase(i,1);
            i=0;
            i--;
            b--;
        }
    }
    for(int i=0; i<a; i++)
    {
        if(n.length()==1) break;
        if(n[0]=='0')
        {
            n.erase(i,1);
            i--;
        }
    }
    return n;
}
