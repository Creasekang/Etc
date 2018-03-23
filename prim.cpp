#include<iostream>
#include<fstream>
using namespace std;
int main(){
    double a,b;
    ifstream in("./gg.txt");
    ifstream in1("./gg1.txt");
    ifstream in2("./gg2.txt");
    ifstream in3("./gg3.txt");
    ifstream in4("./gg4.txt");
    ofstream fo("./dax.txt");
    while(!in.eof()&&!in1.eof()&&!in2.eof()&&!in3.eof()&&!in4.eof()){
        in>>a>>b;
        fo<<a<<","<<b<<endl;
        in1>>a>>b;
        fo<<a<<","<<b<<endl;
        in2>>a>>b;
        fo<<a<<","<<b<<endl;
        in3>>a>>b;
        fo<<a<<","<<b<<endl;
        in4>>a>>b;
        fo<<a<<","<<b<<endl;
        if(a==99000) break;
    }
    in.close();
    in1.close();
    in2.close();
    in3.close();
    in4.close();
    fo.close();
}