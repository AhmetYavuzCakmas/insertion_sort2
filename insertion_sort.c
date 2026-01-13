int dizi[n];
for(int i =1;i<n;i++){
    key = dizi[1];
    int j = i-1;
    while(dizi[j]>key && j>=0){
        dizi[j+1]=dizi[j]
        j=j-1;
    }
    dizi[j+1]=key;
}