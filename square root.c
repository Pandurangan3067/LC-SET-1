int mySqrt(int x) {
     if(x==0 || x==1)
   return x;
   else
   {  
    int a=1,b=x,sqr=0,mid=0;
    {
        while(a<=b)
        {
            mid=a+b/2;
            if(mid*mid==x)
              return mid;
            if(mid*mid<x)
            {
                a=mid+1;
                sqr=mid;
            }
            else
            {
              b=mid-1;  
            }
        }
       return sqr;
    }
  }  
}
