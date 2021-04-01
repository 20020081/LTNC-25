#include<iostream>
#include<cstring>

using namespace std;

int check_fre(char chr1[], char chr2[]){
    int fre = 0, i = 0, t = 0, j = 0;
    if(strcmp(chr1, chr2) >  0)
        return -1;

    while(chr2[i] != '\0'){
        if(chr1[j] == chr2[i]){
            t++;
            j++;
        }
        if(t == strlen(chr1)){
            fre++;
            t = 0;
            j = 0;
        }
        i++;
    }

    return fre;

}

int main(){
    char chr1[50], chr2[50];
    cin >> chr1 >> chr2;

    cout << check_fre(chr1, chr2);
    return 0;
}
