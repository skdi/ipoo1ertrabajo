#include <stdio.h>

    int busquedabin(int x,int s[],int n)
    {
        int low,high,mid;
        low=0;
        high=n-1;
        while(low<=high){
            mid=(low+high)/2;
            if(x<s[mid])
                high=mid-1;
            else if(x>s[mid])
                low=mid+1;
            else
                return mid;
        }
        return -1;
    }

    	int strlen(char s[])
	{
		int i;
		i=0;
		while(s[i]!='\0')
			++i;
		return i;}

	int atoi(char s[])
	{
        int i,n;
        n=0;
        for(i=0;s[i]>='0'&& s[i]<='9';++i)
            n=10*n+(s[i]-'0');
        return n;
	}

    void squeeze(char s[],int c)
    {
        int i,j;
        for(i=j=0;s[i]!='0';i++)
            if(s[i]!=c)
                s[j++]=s[i];
        s[j]='\0';

    }

    void strat(char s[],char t[])
    {
        int i,j;
        i=j=0;
        while(s[i]!='\o')
            i++;
        while((s[i++]=t[j++]!='\0'))
        ;
    }

    int lower(int c)
    {
        if(c>='A'&& c<='Z')
            return c+'a'-'A';
        else
            return c;
    }


main(){
    int n=10;
    char a='A';
    int xs[n];
    char s[n],t[n];
    int i,x;
    x=5;

    for (i=0;i<n;i++){
        s[i]=i+1;
        t[i]=i+1;
        if (i==n)
            s[i]='\0';
    }


    //printf("%d",busquedabin(x,xs,n));
    //printf("%c",lower(a));
    //strlen("holaaaaaa");
    strat(s,t);




}
