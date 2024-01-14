//
// Created by 12san on 14-01-2024.
//
bool isPalindrome(int x) {
    long int reverse=0,temp=x;
    while(temp>0)
    {
        int rem=temp%10;
        reverse=reverse*10+rem;
        temp=temp/10;
    }
    if(x==reverse)
        return true;
    else
        return false;
}