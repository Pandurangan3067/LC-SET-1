bool isPalindrome(int x) {
    if(x<0) {
    return false;
   }
  long long int t=x,rem=0;
    while(x!=0){
        int res=x%10;
        rem=(rem*10)+res;
        x=x/10;
    }
    if(rem==t){
        return 1;
        
    }
    else{
        return 0;
    }

}
