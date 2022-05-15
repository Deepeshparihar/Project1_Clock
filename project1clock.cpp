#include<iostream>
#include<windows.h>
 using namespace std;

 int main(){
     int H,M,S,A,err;
     err=A=0;
     while(err==0){
         cout<<"enter hour :"<<endl;
         cin>>H;
         cout<<"enter minutes :"<<endl;
         cin>>M;
         cout<<"enter seconds :"<<endl;
         cin>>S;
         if(H<24 && M<60 && S<60)
         err++;
         else
         system("cls");
     }
     while(A==0){
         system("cls");
         cout<<H<<":"<<M<<":"<<S<<endl;
         Sleep(1000);
         S++;
         if(S>59){
             S=0;
             M++;
         }
         if(M>59){
             M=0;
             H++;
         }
         if(H>24){
             H=0;
         }
     }
     return 0;

 }