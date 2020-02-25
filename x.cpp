// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
// int main() {
 
//     int A, B, X;

//     cin >> A; 
//     cin >> B;

//     X = A + B;

//     cout << "X = " << X << endl;
 
//     return 0;
// }
// int main() {
//     double n, area, raio;
//     n = 3.14159;
//     cin >> raio;
//     area = n*raio*raio;

//     cout << "A=" << area << endl;
 
//     return 0;
// }

// int main() {
//     int valor, n;

//     cin >> valor;
//     cout << valor << endl;
//     n = valor / 100;
//     valor = valor % 100;
//     cout << n << " nota(s) de R$ 100,00\n";
//     n = valor / 50;
//     valor = valor % 50;
//     cout << n << " nota(s) de R$ 50,00\n";
//     n = valor / 20;
//     valor = valor % 20;
//     cout << n << " nota(s) de R$ 20,00\n";
//     n = valor / 10;
//     valor = valor % 10;
//     cout << n << " nota(s) de R$ 10,00\n";
//     n = valor / 5;
//     valor = valor % 5;
//     cout << n << " nota(s) de R$ 5,00\n";
//     n = valor / 2;
//     valor = valor % 2;
//     cout << n << " nota(s) de R$ 2,00\n";
//     cout << valor << " nota(s) de R$ 1,00\n";

//     return 0;
// }

// int main() {
//     int N, valor;

//     cin >> N;
    
//     for(int i=0; i < N; i++){
//         cin >> valor;
//         if (valor % 2 == 0 and valor < 0){
//             cout << "EVEN POSITIVE" << endl;
//         }
//         if (valor % 2 == 0 and valor < 0){
//             cout << "EVEN NEGATIVE" << endl;
//         }
//         if (valor % 2 == 1 and valor < 0){
//             cout << "ODD POSITIVE" << endl;
//         }
//         if (valor % 2 == -1 and valor < 0){
//             cout << "ODD NEGATIVE" << endl;
//         }
//         if (valor == 0){
//             cout << "NULL" << endl;
//         }
//     }
//     return 0;
// }

// int main() {

//     int N, horas, minutos, segundos;
//     cin >> N;
    
//     horas = N / 3600;
//     N = N%3600;
//     minutos = N / 60;
//     segundos = N%60;

//     cout << horas << ":" << minutos << ":" << segundos << endl;
    

//    return 0;
// }

// int main() {

//     int anos, meses, dias;
//     cin >> dias;
    
//     anos = dias / 365;
//     dias = dias%365;
//     meses = dias / 30;
//     dias = dias%30;

//     cout << anos << " ano(s)" << endl;
//     cout << meses << " mes(es)" << endl;
//     cout << dias << " dia(s)" << endl;
    

//    return 0;
// }

// int main() {

//     int A, B, C, D;
//     cin >> A >> B >> C >> D;
//     if (B < C and D < A  and (C+D) < (A+B) and C < 0 and D < 0 and A % 2 == 0){
//         cout << "Valores aceitos" << endl;
//     }
//     else{
//         cout << "Valores nao aceitos" << endl;
//     }
//    return 0;
// }

// int main() {

//     double A, B, C, delta, x1, x2, elev;
//     elev = 0.5;
//     cin >> A >> B >> C;
    
//     delta = (B*B) - (4*A*C);

//     if (delta <= 0 or A <= 0){
//         cout << "Impossivel calcular" << endl;
//     }
//     else{
//         delta = delta^elev;    
//         x1 = (-B + delta)/(2*A);
//         x2 = (-B - delta)/(2*A);
//         cout << "R1 = " << x1 << endl;
//         cout << "R2 = " << x2 << endl;
//     }
//    return 0;
// }

// int main() {

//     float codigo, quantidade, valor;

//     cin >> codigo >> quantidade;
//     if (codigo == 1){valor = 4.00;}
//     if (codigo == 2){valor = 4.50;}
//     if (codigo == 3){valor = 5.00;}   
//     if (codigo == 4){valor = 2.00;}
//     if (codigo == 5){valor = 1.50;}

//     printf("Total: R$ %.2f\n",valor*quantidade);
//     return 0;
// }

// int main() {

//     for(int i=1; i <=100; i++){
//         if(i%2==0){
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

// int main() {

//     string tipo, qualidade, aliment;
//     cin >> tipo >> qualidade >> aliment;

//     if(tipo=="vertebrado"){
//         if(qualidade=="ave"){
//             if(aliment=="carnivoro"){cout << "aguia" << endl;}
//             if(aliment=="onivoro"){cout << "pomba" << endl;}
//         }
//         if(qualidade=="mamifero"){
//             if(aliment=="herbivoro"){cout << "vaca" << endl;}
//             if(aliment=="onivoro"){cout << "homem" << endl;}
//         }
//     }
//     if(tipo=="invertebrado"){
//         if(qualidade=="inseto"){
//             if(aliment=="hematofago"){cout << "pulga" << endl;}
//             if(aliment=="herbivoro"){cout << "lagarta" << endl;}
//         }
//         if(qualidade=="anelideo"){
//             if(aliment=="hematofago"){cout << "sanguessuga" << endl;}
//             if(aliment=="onivoro"){cout << "minhoca" << endl;}
//         }
//     }
//     return 0;
// }

// int main() {

//     int A, B;
//     cin >> A >> B;
//     if(A%B==0){cout << "Sao Multiplos" << endl;}    
//     else if(B%A==0){cout << "Sao Multiplos" << endl;}
//     else{cout << "Nao sao Multiplos" << endl;}
//     return 0;
// }

// int main() {

//     int A, B, C;
//     cin >> A >> B >> C;
//     if(A < B and A < C and B < C){cout << A << endl << B << endl << C << endl << endl << A << endl << B << endl << C << endl;}
//     else if(A < B and A < C and C < B){cout << A << endl << C << endl << B << endl << endl << A << endl << B << endl << C << endl;}
//     else if(B < A and B < A and A < C){cout << B << endl << A << endl << C << endl << endl << A << endl << B << endl << C << endl;}
//     else if(B < A and B < C and C < A){cout << B << endl << C << endl << A << endl << endl << A << endl << B << endl << C << endl;}
//     else if(C < B and C < A and A < B){cout << C << endl << A << endl << B << endl << endl << A << endl << B << endl <<  C << endl;}
//     else if(C < B and C < A and B < A){cout << C << endl << B << endl << A << endl << endl << A << endl << B << endl << C << endl;}
//     return 0;
// }

// int main() {

//     int A, count_par=0, count_imp=0, count_neg=0, count_pos=0;

//     for(int i=0; i < 5; i++){
//         cin >> A;
//         if(A%2==0){count_par = count_par + 1;}
//         if(A%2==1 or A%2==-1){count_imp = count_imp + 1;}
//         if(A < 0){count_neg = count_neg +1;}
//         if(A>0){count_pos = count_pos + 1;}
//     }
//     cout << count_par << " valor(es) par(es)" << endl;
//     cout << count_imp << " valor(es) impar(es)" << endl;
//     cout << count_pos << " valor(es) positivo(s)" << endl;
//     cout << count_neg << " valor(es) negativo(s)" << endl;
//     return 0;
// }

// int main() {

//     int N;
//     cin >> N;
//     for(int i = 1; i <= N; i++){
//         if(i%2==0){
//             cout << i << "^2 = " << (i*i) << endl;
//         }
//     }
//     return 0;
// }

// int main(){
//     int A, aux, pos, maior;
//     aux = 0;
//     for(int i=1; i<=100; i++){
//         cin >> A;
//         if(A > aux){pos=i; maior = A;}
//         aux = A;
//     }
//     cout << maior << endl << pos << endl;
//     return 0;
// }

// int main(){ 
//     for(float i=0; i<=2.2;i=i+0.2){
//         for(float j=1+i; j<=(i+3); j++){
//             cout << "I=" << i << " J=" << j << endl;
//         }
//     }
//     return 0;
// }

// int main(){ 
//     int M, N, soma;
//     cin >> M; 
//     if(M<=0){return 0;}
//     cin >> N;
//     if(N<=0){return 0;}
    
//     soma = 0;

//     if(M>N){
//         for(N; N<=M; N++){
//         soma = soma + N;
//         cout << N << " ";
//     }}

//     else if(N>M){
//         for(M; M<=N; M++){
//         soma = soma + M;
//         cout << M << " ";
//     }}

//     cout << "SUM=" << soma << endl;

//     return 0;
// }

// int main(){ 
//     float nota1, nota2;
//     int x;
//     bool y = true;
//     while(y){
//         cout << "Nota 1: ";
//         cin >> nota1;
//         while(nota1<=0 or nota1>10){
//             cout << "nota invalida" << endl;
//             cout << "Nota 1: ";
//             cin >> nota1;
//         }
//         cout << "Nota 2: ";
//         cin >> nota2;
//         while(nota2<=0 or nota2>10){
//             cout << "nota invalida" << endl;
//             cout << "Nota 2: ";
//             cin >> nota2;
//         }
//         cout << "media = " << (nota1+nota2)/2 << endl;
//         x = 0;
//         while(x!=1 or x !=2){
//             cout << "novo calculo (1-sim 2-nao)" << endl;
//             cin >> x;
//             if(x == 1){y = true; break;}
//             else if(x == 2){y = false; break;}
//         }
//     }
//     return 0;
// }

// int main(){ 
//     int X, Y,soma;
//     soma = 0;
//     cin >> X >> Y;
//     if(X > Y){
//         for(Y; Y<=X;Y++){
//             if(Y%13!=0){soma = soma + Y;}
//         }
//     }
//     else if(Y > X){
//         for(X; X<=Y;X++){
//             if(X%13!=0){soma = soma + X;}
//         }
//     }
//     cout << soma << endl;
//     return 0;
// }

// int main(){ 
//     int x, y, count;
//     cin >> x >> y;
//     int aux = 1;
//     while(aux<=y){
//         cout << aux;
//         count = count + 1;
//         if(count != x){cout << " ";}
//         else if(count == x){
//             cout << endl;
//             count = 0;
//         }
//         aux = aux + 1;
//     }
//     return 0;
// }

// int main(){
//     int x;
//     cin >> x;
//     while(x!=0){
//         for(int i=1; i<=x;i++){
//             cout << i;
//             if(i==x){cout << endl;}
//             else{cout << " ";}
//         }
//         cin >> x;
//     }
//     return 0;
// }

// int main(){
//     int x, fib, fib1, fib2;
//     fib = 1;
//     fib1 = 1;
//     cin >> x;
//     if(x > 0 and x < 46){
//         cout << "0 1 ";
//         for(int i=1; i<x-1; i++){
//             cout << fib;
//             fib2 = fib1;
//             fib1 = fib;
//             fib = fib1 + fib2;

//             if(i==x-2){cout << endl;}
//             else{cout << " ";}
//         }
//     }
//     return 0;
// }

// int main(){
//     double soma = 1;
//     double j = 2;
//     for(int i=3; i<=39;i=i+2){
//         soma = soma + (i/j);
//         j = j*2;
//     }
//     printf("%.2F\n", soma);

//     return 0;
// }

// int main(){
//     long long T, PA, PB;
//     double G1, G2;
//     cin >> T;
//     for(int i=1; i <= T; i++){
//         cin >> PA >> PB >> G1 >> G2;
//         int count = 0;
//         bool stop = true;
//         while(stop){
//             PA = PA + (PA*(G1/100));
//             PB = PB + (PB*(G2/100));                    
//             count++;
//             if(PA>PB){stop=false; cout << count << " anos." << endl;}
//             else if(count>=100){stop=false; cout << "Mais de 1 seculo." << endl;}
//             }  
//     }
//     return 0;
// }

// int main(){
//     double A[100];
//     for(int i=0;i<100;i++){
//         cin >> A[i];
//         if(A[i]<=10){
//             printf("A[%d] = %.1lf\n",i,A[i]);
//         }
//     }
//     return 0;
// }

// int main(){
//     int T, N;
//     long long V[60], fib=0, fib1=1, fib2=0;
//     cin >> T;
//     for(int j=0;j<=60;j++){
//         V[j]=fib;
//         fib2 = fib1;
//         fib1 = fib;
//         fib=fib1+fib2;
//     }
//     for(int i=0; i<T;i++){
//         cin >> N;
//         cout << "Fib(" << N << ") = " << V[N] << endl;
//     }
//     return 0;
// }   

// int main(){
//     double A[100], X;
//     cin >> X;
//     A[0] = X;
//     printf("N[%d] = %.4lf\n", 0, A[0]);
//     for(int i = 1;i<100;i++){
//         A[i] = A[i-1]/2;
//         printf("N[%d] = %.4lf\n", i, A[i]);
//     }
//     return 0;
// }

// int main(){
//     int V, N;
//     float total, porc;
//     cin >> V >> N;
//     for(int i=1; i<10;i++){
//         if(i!=1) cout << " ";
//         porc = i*10;
//         total = (N*V*(porc/100.0));
//         if(total != int(total)){
//             total = total + 1;
//             cout << int(total);
//         }
//         else{
//             cout << total;
//         }
//     }
//     cout << endl;
//     return 0;
// }

//1181
// int main(){
//     int num; 
//     string s;
//     float M[12][12], calc=0, valor;
//     cin >> num >> s;
//     for(int i=0; i<12;i++){
//         for(int j=0;j<12;j++){
//             cin >> valor;
//             M[i][j] = valor;
//         }
//     }
//     if(s == "S"){
//         for(int i=num;i<num+1;i++){
//             for(int j=0; j<12;j++){
//                 calc = calc + M[i][j];
//             }
//         }
//     }
//     else if(s == "M"){
//         for(int i=num;i<num+1;i++){
//             for(int j=0;j<12;j++){
//                 calc = calc + M[i][j];
//             }
//         }
//         calc = calc/12;
//     }
//     printf("%.1f\n", calc);
//     return 0;
// }

//1182
// int main(){
//     int num; 
//     string s;
//     float M[12][12], calc=0, valor;
//     cin >> num >> s;
//     for(int i=0; i<12;i++){
//         for(int j=0;j<12;j++){
//             cin >> valor;
//             M[i][j] = valor;
//         }
//     }
//     if(s == "S"){
//         for(int i=0;i<12;i++){
//             for(int j=num;j<num+1;j++){
//                 calc = calc + M[i][j];
//             }
//         }
//     }
//     else if(s == "M"){
//         for(int i=0;i<12;i++){
//             for(int j=num;j<num+1;j++){
//                 calc = calc + M[i][j];
//             }
//         }
//         calc = calc/12;
//     }
//     printf("%.1f\n", calc);
//     return 0;
// }

// 1848
// int main(){
//     string c;
//     int count=0, soma;
//     while(count!=3){
//         soma = 0;
//         getline(cin, c);
//         if(c == "caw caw"){
//             cout << soma << endl;
//             count = count + 1;
//         }
//         else{
//             while(c != "caw caw"){
//                 if(c == "--*"){soma=soma+1;}
//                 else if(c == "-*-"){soma=soma+2;}
//                 else if(c == "-**"){soma=soma+3;}
//                 else if(c == "*--"){soma=soma+4;}
//                 else if(c == "*-*"){soma=soma+5;}
//                 else if(c == "**-"){soma=soma+6;}
//                 else if(c == "***"){soma=soma+7;}
//                 getline(cin, c);
//             }
//             cout << soma << endl;
//             count = count + 1;
//         }
//     }
//     return 0;
// }

//1183
// int main(){
//     float M[12][12], calc=0, valor;
//     string O;
//     cin >> O;
//     for(int i=0;i<12;i++){
//         for(int j=0;j<12;j++){
//             cin >> valor;
//             M[i][j] = valor;
//         }
//     }
//     if(O == "S"){
//         for(int i=0;i<12;i++){
//             for(int j=i+1;j<12;j++){
//                 calc = calc + M[i][j];
//             }
//         }
//     }
//     else if (O == "M"){
//         float count = 0;
//         for(int i=0;i<12;i++){
//             for(int j=i+1;j<12;j++){
//                 calc = calc + M[i][j];
//                 count = count + 1;
//             }
//         }
//         calc = calc/count;
//     }
//     printf("%.1f\n",calc);
//     return 0;
// }

//1187
// int main(){
//     double M[12][12], calc=0, valor;
//     string O;
//     cin >> O;
//     for(int i=0;i<12;i++){
//         for(int j=0;j<12;j++){
//             cin >> valor;
//             M[i][j] = valor;
//         }
//     }
//     if(O == "S"){
//         for(int i=0;i<6;i++){
//             for(int j=i+1;j<11-i;j++){
//                 calc = calc + M[i][j]; 
//             }
//         }
//     }
//     else if (O == "M"){
//         for(int i=0;i<6;i++){
//             for(int j=i+1;j<11-i;j++){
//                 calc = calc + M[i][j];
//             }
//         }
//         calc = calc/30.0;
//     }
//     printf("%.1f\n", calc);
//     return 0;
// }

//1435
// int main(){
//     int N=-1, valor=1;
//     cin >> N;
//     while(N!=0){
//         int matriz[N][N];
//         int k = -1;
//         while(k<N){
//             for(int i=0;i<N;i++){
//                 for(int j=0;j<N;j++){
//                     if(i>k and i<(N-(k+1)) and j>k and j<(N-(k+1))){matriz[i][j] = k+2;}
//                 }
//             }
//             k++;
//         }
//         for(int i=0;i<N;i++){
//             if(i!=0){cout<<endl;}
//             cout<<"  ";
//             for(int j=0;j<N;j++){
//                 if(j!=0){cout<<"   ";}        
//                 cout<<matriz[i][j];
//             }
//         }
//         cout << endl;
//         cin >> N;
//     }
//     return 0;
// }

//1478
// int main(){

//     return 0;
// }

//1759
// int main(){
//     int N;
//     cin >> N;
//     for(int i=0;i<N;i++){
//         if(i!=0){cout<<" ";}
//         cout << "Ho";
//     }
//     cout <<"!" << endl;
//     return 0;
// }

//1789
// int main(){
//     int L, x;
//     while(cin >> L){
//         int V[L];
//         for(int i=0;i<L;i++){
//         cin >> x;
//         V[i] = x;
//         }
//         int maior = 0;
//         for(int i=0;i<L;i++){
//             if(maior < V[i]){maior = V[i];}
//         }
//         int result;
//         if(maior < 10){result=1;}
//         else if (maior >=10 and maior<20){result=2;}
//         else if(maior>=20){result=3;}
//         cout << result << endl;
//     }
//     return 0;
// }

//1837
// int main(){
//     int a, b, q, r;
//     cin >> a >> b;
//     q = a / b;
//     r = a % b;
//     cout << q << " " << r << endl;
//     return 0;
// }

// 1847
// int main(){
//     int A, B, C;
//     cin >> A >> B >> C;
//     if(B<A){
//         if(C>=B){cout << ":)" << endl;}
//         else if(C<B and (A-B)>(B-C)){cout << ":)" << endl;}
//         else if(C<B and (A-B)<=(B-C)){cout << ":(" << endl;}
//     }
//     else if(A<B){
//         if(B>=C){cout << ":(" << endl;}
//         else if(C>B and (B-A)>=(C-B)){cout << ":(" << endl;}
//         else if(C>B and (B-A)<(C-B)){cout << ":)" << endl;}
//     }
//     else{
//         if(B>=C){cout << ":(" << endl;}
//         else if(B<C){cout << ":)" << endl;}
//     }
//     return 0;
// }

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int v[]={A,B,C,D};
    bool saida = true;
    int i=0,j=1,k=2;
    
    if(v[i]<v[j]+v[k] and v[j]<v[i]+v[k] and v[k]<v[j]+v[i]){cout << "S" << endl;}
    else if(v[i]<v[j]+v[k+1] and v[j]<v[i]+v[k+1] and v[k+1]<v[j]+v[i]){cout << "S" << endl;}
    else if(v[i]<v[j+1]+v[k+1] and v[j+1]<v[i]+v[k+1] and v[k+1]<v[j+1]+v[i]){cout << "S" << endl;}
    else if(v[i+1]<v[j+1]+v[k+1] and v[j+1]<v[i+1]+v[k+1] and v[k+1]<v[j+1]+v[i+1]){cout << "S" << endl;}
    else{cout << "N" << endl;}
    return 0;
}