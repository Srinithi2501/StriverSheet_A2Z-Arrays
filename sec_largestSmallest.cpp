int second_largest(vector<int>&a, int n){
    int max=a[0];
    int sec_max=-1;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            sec_max=max;
            max=a[i];
        }
        else if(a[i]<max && a[i]>sec_max){
            sec_max=a[i];
            }
    }
    return sec_max;
}
int second_smallest(vector<int>a, int n){
    int min=a[0];
    int sec_min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            sec_min=min;
            min=a[i];
        }
        else if(a[i]>min && a[i]<sec_min){
            sec_min=a[i];
        }
    }
    return sec_min;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
   int sec_largest=second_largest(a, n);
   int sec_smallest=second_smallest(a,n);
   return {sec_largest, sec_smallest};
    
}