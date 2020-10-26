void m(int a[], int s, int e) {
  if(e-s<=1) return;
  m(a,s,(s+e)/2);
  m(a,(s+e)/2,e);
  for(int i=s,c=(s+e)/2,j=c,k=0,b[e-s];i<e;a[i]=b[i++-s],k++) {
    for(;j<e&&(a[i]>a[j]||i==c);j++,k++)b[k]=a[j];
    if(k<e-s) b[k]=a[i];
  }
}
