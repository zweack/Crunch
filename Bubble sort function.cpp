 
 int sort(int a[2000],int n)
 {
 int i,j;
 for(i=0; i<(n-1); i++)
  {
    for (j=0; j<n-i-1; j++)
    {
      if (a[j] > a[j+1])
      {
        swap=a[j];
        a[j]   = a[j+1];
        a[j+1] = swap;
      }
    }
  }
}
