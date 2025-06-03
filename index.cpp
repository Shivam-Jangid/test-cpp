#include<bits/stdc++.h>
using namespace std;
int main(){
    //Designing of concrete upto M80 using IS:456 & IS:10262 2019
    cout<<"Enter the Characteristic Compressive strength of concrete required";
    int fck; cin>>fck;
    //Let say fck = 50
    vector<float> x(11),S(11);
    for(int i=0;i<2;i++){
        x[i] = 5.0;              // 10,15
    }
    for(int i=2;i<4;i++){
        x[i] = 5.5;             // 20,25
    }
    for(int i=4;i<11;i++){
        x[i] = 6.5;             // 30,35,40,45,50,55,60
    }
    x[11] = 8;  // 65 and above
    for(int i=0;i<2;i++){
        S[i] = 3.5;              // 10,15
    }
    for(int i=2;i<4;i++){
        S[i] = 4;             // 20,25
    }
    for(int i=4;i<11;i++){
        S[i] =5;             // 30,35,40,45,50,55,60
    }
    S[11] = 6;  // 65 and above
    int NMAS,zone;
    cout<<"Enter Nominal Maximum Size of Aggregate and its zone";
    cin>>NMAS>>zone;
    double airContent,wc;
    if(NMAS == 10){
        airContent = 1.5/100;
        wc = 208.00;
    }
        if(NMAS == 20){
        airContent = 1/100;
        wc = 186.00;
    }
        if(NMAS == 40){
        airContent = 0.8/100;
        wc = 165.00;
    }
    cout<<"Enter w/c ratio for initial guess from code";
    double w_c;
    cin>>w_c;
    cout<<"Enter type of aggregate";
    string typeOfAggregate;
    cin>>typeOfAggregate;
    if(typeOfAggregate == "sub-angular"){
        wc -= 10;
    }
    if(typeOfAggregate == "gravel"){
        wc -= 15;
    }
    if(typeOfAggregate == "rounded gravel"){
        wc -= 20;
    }
    cout<<"enter slump required";
    int slump; cin>>slump;
    double slumpCorr = ((slump - 50)*(3/25))/100;
    wc = wc *(1+slumpCorr);

    cout<<"Are water reducing admixture present ?(Yes/No)";
    string wrAd;
    cin>>wrAd;
    if(wrAd == "Yes"){
        cout<<"How much water is reduced (between (5-10)%)";
        double wrperc;
        cin>>wrperc;
        wrperc = wrperc / 100;
        wc = wc*(1-wrperc);
    }
    cout<<"Are Super-plasticizers present ?(Yes/No)";
    string wrSp;
    cin>>wrSp;
    if(wrSp == "Yes"){
        cout<<"How much water is reduced (between (20-30)%)";
        double wrperc;
        cin>>wrperc;
        wrperc = wrperc / 100;
        wc = wc*(1-wrperc);
    }

    int cement = wc/w_c;
    double flyAsh;
    cout<<"Amount of flyash in percentage";
    cin>>flyAsh;

    int min_cement_cont[5];
    for(int i=0;i<5;i++){
        
    }
    

    return 0;
}