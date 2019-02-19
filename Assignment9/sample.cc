#include <iostream>
using namespace std;

int main(){

char a='-';
char b='|';
int n=0,m=0;
cout<<"Enter the value of n for number of row boxes: "<<endl;
cin>>n;
cout<<"Enter the value of m for number of column boxes: "<<endl;
cin>>m;
for(int l=0;l<m;l++){
for(int j=0;j<5;j++){
for(int k=0;k<n;k++){
if(j==0||j==4){
for(int i=0;i<7;i++){

if((k==0&&i==0)||(k==n-1&&i==6)){
cout<<" ";
}else if((l==0&&j==0)||(l<=m-1&&j==4)){
cout<<a;
}else{
cout<<"";
}
}
}else if(j==1||j==3){
for(int i=0;i<7;i++){
if((k==0&&i==0)||i==6){
cout<<b;
}else{
cout<<" ";
}
}
}else{
for(int i=0;i<7;i++){
if((k==0&&i==0)||i==6){
cout<<b;
}else if(i==3){
cout<<"Q";
}else{
cout<<" ";
}
}
}
}
if(){
cout<<endl;
}
}
}
return 0;
}
