#include<vector>
#include<stdio.h>
using namespace std;
long long int bsearch(vector<long long int> v,long long int b)
{
int beg,last,i,mid;

long long int z;
z=-1;

beg=0;last=v.size()-1;
if(b>v[last]||b<v[beg])
{
return z;
}
else
{

while(beg<=last)
{
mid=(beg+last)/2;
if(v[mid]==b)
{
z=mid;
break;
}
if(v[mid]<b)
{
beg=mid+1;
}
else if(v[mid]>b)
{
last=mid-1;
}
}
if(z!=-1)
{
while(v[z-1]==b)
{
z--;
}
}
return z;
}
}

int main()
{long long int i,n,x,q,a;




scanf("%lld %lld",&n,&q);
printf("\n");

vector <long long int> v;
vector <long long int> v1;
for(i=0;i<n;i++)
{
scanf("%lld",&a);
v.push_back(a);
}



for(i=0;i<q;i++)
{
scanf("%lld",&a);
v1.push_back(a);

}

for(i=0;i<q;i++)
{
x=bsearch(v,v1[i]);
printf("%lld \n",x);


}



return 0;
}
