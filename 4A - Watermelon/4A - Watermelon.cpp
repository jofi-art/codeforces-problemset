/// Template personalizado de Jofiel
/// Jofiel's custom template

#include <bits/stdc++.h>

using namespace std;

#define JOFITOOLS

#ifdef JOFITOOLS

    /// Numbers
    #define PI                 3.14159265358979323846f

    /// Operations
    #define MOD(x,y)           x%y
    #define QUIET(x)           x=x
    #define in(x)              cin>>x
    #define out(x)             cout<<x
    #define pb                 push_back
    #define pf                 push_front
    #define p                  push
    #define PB                 pop_back
    #define PF                 pop_front
    #define P                  pop
    #define mp                 make_pair
    #define fi                 first
    #define se                 second
    #define sp                 system("pause")
    #define ClearWindows       system("cls")
    #define ClearLinux         system("clear")

    /// Conversions
    #define CTI(x)             x-'0'
    #define ITC(x)             x+'0'

    /// Booleans
    #define EsPar(x)           (MOD(x,2)==0)
    #define xHASy(x,y)         (x.find(y)!=-1)

    /// Loops
    #define YtoX(i,y,x)        for(int i=y;i<x;i++)
    #define YtoX2(i,y,x)       for(int i=y;i<=x;i++)
    #define nTimes(n)          while(n--)
    #define ForEachDigitIn(n)  for(int i=n;i!=0;i/=10)
    #define Forever            while(true)
    #define ForISMap(x,it)     for(map<int,string>::iterator it=x.begin();it!=x.end();it++)
    #define ForSIMap(x,it)     for(map<string,int>::iterator it=x.begin();it!=x.end();it++)
    #define ForIIMap(x,it)     for(map<int,int>::iterator it=x.begin();it!=x.end();it++)
    #define ForSSMap(x,it)     for(map<string,string>::iterator it=x.begin();it!=x.end();it++)
    #define ForICMap(x,it)     for(map<int,char>::iterator it=x.begin();it!=x.end();it++)
    #define ForCIMap(x,it)     for(map<char,int>::iterator it=x.begin();it!=x.end();it++)
    #define ForPISvector(x,it) for(vector<pair<int,string>>::iterator it=x.begin();it!=x.end();it++)
    #define ForPSIvector(x,it) for(vector<pair<string,int>>::iterator it=x.begin();it!=x.end();it++)
    #define ForPIIvector(x,it) for(vector<pair<int,int>>::iterator it=x.begin();it!=x.end();it++)
    #define ForPSSvector(x,it) for(vector<pair<string,string>>::iterator it=x.begin();it!=x.end();it++)
    #define ForPICvector(x,it) for(vector<pair<int,char>>::iterator it=x.begin();it!=x.end();it++)
    #define ForPCIvector(x,it) for(vector<pair<char,int>>::iterator it=x.begin();it!=x.end();it++)

    /// Other
    #define AllOf(x)           x.begin(),x.end()
    #define sz(x)              x.size()

    template <typename T1, typename T2>
    struct SE{                                                /// Segundo Elemento
        typedef pair<T1, T2> type;
        bool operator ()(type const& a, type const& b) const{
            return a.second < b.second;
        }
    };

    template <class T>
    string ToString(T t){
        stringstream ss;
        ss << t;
        return ss.str();
    }

    string MyIntToString(int n){
        if(n<0)
            return '-' + MyIntToString(-n);
        else if(n==0)
            return "0";
        string str;
        ForEachDigitIn(n) str+=ITC(MOD(i,10));
        reverse(AllOf(str));
        return str;
    }

    int ToInt(string s){
        return atoi(s.c_str());
    }

    float ToFloat(string s){
        return atof(s.c_str());
    }

    long ToLong(string s){
        return atol(s.c_str());
    }

    long long ToLongLong(string s){
        return atoll(s.c_str());
    }

    int Factorial(int n){
        return n<2 ? 1 : n * Factorial(n-1);
    }

    int mcd(int x,int y){
        return (y==0) ? x : mcd(y,MOD(x,y));
    }

    int mcm(int num1, int num2){
        int mcm = 0;
        int a = max(num1, num2);
        int b = min(num1, num2);
        mcm = (a/mcd(a,b))*b;
        return mcm;
    }

    int NumberOfDigits(int n){
        if(n==0)
            return 1;
        if(n<0)
            return NumberOfDigits(-n);
        int c=0;
        ForEachDigitIn(n) c++;
        return c;
    }

    float SphereVolume(float radio){
        return (4.0f * PI  * pow(radio, 3.0f)) / 3.0f;
    }

    float CilinderVolume(float radio, float altura){
        return (2.0f * PI * pow(radio, 2.0f) * altura);
    }

    float CircleArea(float radio){
        return (2.0f * PI * pow(radio, 2.0f));
    }

    vector <int> IntSplit(int n){
        vector <int> split;
        if(n==0){
            split.pb(0);
            return split;
        }
        if(n<0){
            vector <int> negativos = IntSplit(-n);
            negativos[0]=-negativos[0];
            return negativos;
        }
        ForEachDigitIn(n) split.pb(MOD(i,10));
        reverse(AllOf(split));
        return split;
    }

    vector <int> divisores(int n){
        vector <int> divs;
        YtoX2(i,1,n)
            if(MOD(n,i) == 0)
                divs.pb(i);
        return divs;
    }

    bool EsPrimo(int n){
        if(n<2) return false;
        YtoX(i,2,n)
            if(MOD(n,i)==0 && i!=n)
                return false;
        return true;
    }

    bool EsCompuesto(int n){
        return (!EsPrimo(n) && n > 1) ? true : false;
    }

    bool EsPalindromo(string s){
        string reversed = s;
        reverse(AllOf(reversed));
        return s==reversed ? true : false;
    }

    bool EsPalindromo(int n){
        vector <int> InOrder = IntSplit(n);
        vector <int> disordered = InOrder;
        reverse(AllOf(disordered));
        return InOrder==disordered ? true : false;
    }

    bool AllDigitsAreDistinct(int n){
        vector <int> numbers = IntSplit(n);
        int c=0;
        YtoX(i,0,sz(numbers))
            YtoX(j,0,sz(numbers))
                (numbers[i]!=numbers[j]) ? c++ : QUIET(c);

        return (c==(sz(numbers)*(sz(numbers)-1))) ? true : false;
    }

    bool AllDigitsAreDistinct(string s){
        int c=0;
        YtoX(i,0,sz(s))
            YtoX(j,0,sz(s))
                (s[i]!=s[j]) ? c++ : QUIET(c);

        return (c==(sz(s)*(sz(s)-1))) ? true : false;
    }

    bool x_divisor_y(int x, int y){
        vector <int> divs_y = divisores(y);
        YtoX(i,0,sz(divs_y))
            if(divs_y[i] == x)
                return true;
        return false;
    }

#endif /// JOFITOOLS

/// EL CODIGO INICIA AQUÍ
/// THE CODE STARTS HERE

int main(){
    
    return 0;
}
