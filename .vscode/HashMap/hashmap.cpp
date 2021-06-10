#include <iostream>
#include<string>
using namespace std;

template <typename V>
class mapNode{
    public:
    string key;
    V value;
    mapNode *next;

    mapNode(string key, V value){
        this->key = key;
        this->value = value;
        next = NULL;

    } 

    ~mapNode(){
        delete next;
    }
};



template <typename V>
class hashmap1{
    mapNode <V> ** buckets;
    int count;
    int numBuckets;

    public:
        hashmap1(){
            count = 0;
            numBuckets = 5;
            buckets = new mapNode<V> *[numBuckets];
            for(int i = 0; i < numBuckets;i++)
                buckets[i] = NULL;
        }

        ~hashmap1(){
            for(int i = 0; i < numBuckets;i++){
                delete buckets[i];
            }
            delete [] buckets;
        }

        

        int size(){
            return count;
        }

        private:
            int getBucketIndex(string key){
                int hashCode = 0; //"abc" is key -> a*p^2 + a*p + a*p^0; 'p' can be any prime number
                int currentCoeff = 0;
                for(int i=key.length()-1;i>=0;i--){
                    hashCode += key[i] * currentCoeff;
                    hashCode = hashCode % numBuckets;
                    currentCoeff *= 37;
                    currentCoeff = currentCoeff % numBuckets;  // (n1*n2*n3)%r = ((n1%r) * (n2%r) * (n3%r)) % r
                }
                

                return hashCode % numBuckets;
            }
        public:

        void insert(string key, V value){

            int bucketIndex = getBucketIndex(key);
            mapNode<V> * head = buckets[bucketIndex];

            while (head!=NULL){
                if(head->key == key){
                    head->value = value;
                    return;
                }
                head = head->next;
            }
            head = buckets[bucketIndex];
            mapNode<V> * node = new mapNode<V>(key, value);
            node->next = head;
            buckets[bucketIndex] = node;
            count++;
        }

        V getValue(string key){
            int bucketIndex = getBucketIndex(key);
            mapNode<V> * head = buckets[bucketIndex];
            while(head != NULL){
                if(head->key == key){
                    return head->value;
                }
                head = head->next;
            }
            return 0;

        }

        V remove(string key){
            int bucketIndex = getBucketIndex(key);
            mapNode<V> * head = buckets[bucketIndex];
            mapNode<V> * prev = NULL;
            while(head != NULL){
                if(head->key == key){
                    if(prev == NULL){
                        buckets[bucketIndex] = head->next;                    
                    }else
                    {
                        prev->next = head->next;
                    }
                    V value = head->value;
                    head->next = NULL;
                    delete head; 
                    count--;         
                    return value;  
                    
                }
                prev = head;
                head=head->next;
            }
            return 0;
        }


};


int main(){
    hashmap1<int> map1;
    map1.insert("abc",10);
    map1.insert("def",20);
    cout<<map1.getValue("def");
    cout<<map1.size()<<endl;


}
