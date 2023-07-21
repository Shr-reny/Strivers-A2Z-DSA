/* returns sum of first n numbers using recursion */

int sumFirstN(int n) {
    if(n==0) return 0;
    return n+ sumFirstN(n-1);
}

/*returns factorial of first n numbers */

int fact(int n)
{
  if(n==1) return 1;
  return n*fact(n-1);
}
