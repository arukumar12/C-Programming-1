#include <stdio.h>
int main()
{
    int n,a[10],i,j,k,count;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==k)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}
