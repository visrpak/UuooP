#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;
class Matrix{
    public:
        vector<vector<double>> e;
        vector<double> operator[](int i){
            return e[i];
        }
};
ostream& operator<<(ostream& out, const Matrix& m){
    int r=m.e.size();
    int s=m.e[0].size();
    for(int j=0;j<r;j++){
        for(int i=0;i<s;i++){
            out<<m.e[j][i]<<" ";
        }
        out<<endl;
    }
    out<<endl;
    return out;
}
istream& operator>>(istream& in, Matrix& m){
    string linija;
    while(getline(in, linija)&&linija!=""){
        stringstream ss(linija);
        double temp;
        vector<double> redak;
        while(ss>>temp){
            redak.push_back(temp);
        }
        m.e.push_back(redak);
    }
    return in;
}
Matrix operator*(Matrix& m1, Matrix& m2){
    Matrix result;
    for(int r=0;r<m1.e.size();r++){
        vector<double> redak;
        for(int s=0;s<m2[0].size();s++){
            double sum=0;
            for(int k=0;k<m1[0].size();k++){
                sum+=m1[r][k]*m2[k][s];
            }
            redak.push_back(sum);
        }
        result.e.push_back(redak);
    }
    return result;
}
int main()
{
    Matrix m1, m2;
    ifstream f("matrice.txt");
    istream& ulaz=f;
    ulaz>>m1>>m2;
    cout<<m1<<m2;
    cout<<endl<<m1*m2<<endl;
}
