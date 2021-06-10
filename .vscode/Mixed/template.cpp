#include <iostream>
using namespace std;
template <class T>
class rectangle{
private:
    T length;
    T breadth;
public:
    rectangle(T l,T b){
        length = l;
        breadth = b;
    }

    T area();
    T perimeter();
    T getLength(){ return length;}
    void setLength(T l){length = l;}

};
template <class T>
T rectangle<T>::area() {
    return length*breadth;
}
template <class T>
T rectangle<T>::perimeter() { return 2*(length+breadth);}
int main(){
    rectangle<int> r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter();
}

