#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char alphabet[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  char key[101];
  char cypher[101];
  char finale[101];
  int kvalue1;
  int kvalue2;
  int total;
  scanf("%s",&key);
  //tambah
  for(int i=0;i<strlen(key)-1;i++){
    for(int j=0;j<strlen(alphabet);j++){
      if(key[i]==alphabet[j]){
        kvalue1 = kvalue1+j+1;
      }
    }
  }

  //pengurangan
  for(int k=0;k<strlen(alphabet);k++){
    if(key[strlen(key)-1]==alphabet[k]){
      kvalue2 = k+1;
    }
  }
  //key
  total = kvalue1-kvalue2;
  total = total % 26;
  if(total<0){
    total = total*-1;
  }

  //push
  scanf("%s",&cypher);
  for(int x=0;x<strlen(cypher);x++){
    finale[x] = alphabet[(cypher[x]-'A'+ total) % 26];
  }

  printf("%s\n",finale);

  return 0;
}
