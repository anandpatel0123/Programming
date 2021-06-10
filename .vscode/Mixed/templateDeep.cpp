#include<iostream>
using namespace std;
 
template <typename T,typename U>
class temp{
    T x;
    U y;

    public:
        void setX(T x){
            this->x=x;
        }
        void setY(U y){
            this->y=y;
        }
        T getX(){
            return x;
        }
        U getY(){
            return y;
        }
};

int main(){


    temp <temp<int,int>,double> p1;

    p1.setY(100.2);
    
    temp<int,int> p2;p2.setX(50);p2.setY(60);

    p1.setX(p2);

    cout<<p1.getX().getX()<<" "<<p1.getX().getY()<<" "<<p1.getY()<<" "<<endl;

}