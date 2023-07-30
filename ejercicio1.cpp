#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    
    private:
    
    int age;
    string name;
    string last_name;
    int standar;
    
    public:
    
    string enteroACadena(int numero) {
        
        string resultado;

        if (numero == 0) {
            resultado = "0";
        }

        while (numero > 0) {
            int digito = numero % 10;
            char caracter = '0' + digito; 
            resultado = caracter + resultado; 
            numero /= 10;
        }

        return resultado;
    }
    
    void set_age(int edad){
        this->age = edad;
    }
    void set_standard(int estandar){
        this->standar = estandar;
    }
    void set_first_name(string nombre){
        this->name = nombre;
    }
    void set_last_name(string apellido){
        this->last_name = apellido;
    }
    
    int get_age(){
        return age;
    }
    string get_last_name(){
        return last_name;
    }
    int get_standard(){
        return standar;
    }
    string get_first_name(){
        return name;
    }
    
    string to_string(){
        
        string ans;
        ans += enteroACadena(age);
        ans += ",";
        ans += name;
        ans += ",";
        ans += last_name;
        ans += ",";
        ans += enteroACadena(standar);
        return ans;
    }
    
    
};


int classes() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

int inputAndOutput() {
    int a,b,c,suma;
    cin >> a >> b >> c;
    suma = a + b + c;
    cout << suma << endl;
    return 0;
}

int grastest (int a, int b,int c, int d){
    int max=a;
    
    if(max <= b){
        max = b;
    }
    if(max <= c){
        max = c;
    }
    if(max <= d){
        max = d;
    }
    
    return max;
}

int funtions() {
    int a, b, c, d;
    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    int x = grastest(a,b,c,d);
    
    cout << x << endl;
    
    return 0;
}

int forLoop() {
    
    int num1,num2;
    cin >> num1;
    cin >> num2;
    
    for(num1 ; num1 <= num2 ; num1++){
        
        if(num1 > 9){
            
            if (num1 % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
        else if(num1 == 9){
            cout << "nine" << endl;
        }
        else if(num1 == 8){
            cout << "eight" << endl;
        }
        else if(num1 == 7){
            cout << "seven" << endl;
        }
        else if(num1 == 6){
            cout << "six" << endl;
        }
        else if(num1 == 5){
            cout << "five" << endl;
        }
        else if(num1 == 4){
            cout << "four" << endl;
        }
        else if(num1 == 3){
            cout << "three" << endl;
        }
        else if(num1 == 2){
            cout << "two" << endl;
        }
        else if(num1 == 1){
            cout << "one" << endl;
        }
    }
    
    return 0;
}

int conditionalStatements(){
    
    int n;
    cin >> n;
    
    if(n > 9){
        cout << "Greater than 9" << endl;
    }
    else if(n == 9){
        cout << "nine" << endl;
    }
    else if(n == 8){
        cout << "eight" << endl;
    }
    else if(n == 7){
        cout << "seven" << endl;
    }
    else if(n == 6){
        cout << "six" << endl;
    }
    else if(n == 5){
        cout << "five" << endl;
    }
    else if(n == 4){
        cout << "four" << endl;
    }
    else if(n == 3){
        cout << "three" << endl;
    }
    else if(n == 2){
        cout << "two" << endl;
    }
    else if(n == 1){
        cout << "one" << endl;
    }
    
    return 0;
}

int arrays() {
    
    int n,a;
    cin >> n;
    int arr[n];
    
    for(int i=0; i < n ; i++){
        cin >> a;
        arr[i] = a;
    }
    
    for( int c = n-1; c > 0 ; c--){
       cout << arr[c] << " "; 
    }
    
    cout << arr[0] << endl; 
    
    return 0;
}