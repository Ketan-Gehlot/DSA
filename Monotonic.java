publicbooleanisMonotonic(ArrayList<Integer>A) 
{
booleaninc=true;
booleandec=true;
for(inti=0;i<A.size()-1;i++)
{if(A.get(i) >A.get(i+1))
inc=false;
if(A.get(i) <A.get(i+1))
dec=false;
}
return inc||dec;
}
