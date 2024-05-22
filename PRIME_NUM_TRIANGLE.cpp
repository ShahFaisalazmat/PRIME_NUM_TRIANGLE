#include <iostream>
using namespace std;

int main() {
int num=2;
bool flag = true;
int count=0;
int lineCount =1;
int n; //n is the number of prime numbers user wanted to print  
cout << "Enter How many prime numbers you wanted to print :";
cin >> n;
//WHILE LOOP FOR CHECKING THE USER NUMBER
while(count <n){
      for (int j= 2;j<num; j++){
          if(num%j == 0){
            flag=false; 
            break;
          }
          else{
            flag=true; 
          }
      }
      
//IF NUMBER IS PRIME      
      if(flag==true){
        count++;
        cout<<num<<"*";
        if(count == lineCount*(lineCount +1)/2){
          cout<<endl;
          lineCount++;
        }
      }
      
     num++;
     }    
return 0;
}