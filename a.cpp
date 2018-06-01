bool sim_mat(bool** A, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]!=A[j][i]){
                return false;
            }
        };
    };
    return true;
};


int ref_matriz(bool** A, int n, int m){
    int a=0;
    for(int i=0;i<n;i++){
        if(A[i][i]==1){
           a++;
        }
    }
    return a;
}

bool refle_matriz(bool** A, int n, int m){
    int a= ref_matriz(A, n, m);
    if(a==n){
        return true;
    }else{
        return false;
    }
}

bool trans_matriz(bool** A, int n, int m){
    for(int i=0;i<n; i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==1){
                for(int k=0;k<n;k++){
                    if(A[j][k]==1 && A[i][k]!=1){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
