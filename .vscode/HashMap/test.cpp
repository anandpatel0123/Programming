#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        string key;
        int value;
        Node *next;

        Node(string key, int value){
            this->key = key;
            this->value = value;
            next = NULL;
        }

        ~Node(){
            delete next;
        }
};

class ourmapp{

    Node ** buckets;
    int size;
    int num_buckets;

    public:
        ourmapp(){
            size = 0;
            num_buckets = 5;
            buckets = new Node*[num_buckets];
            for(int i=0; i<num_buckets; i++){
                buckets[i] = NULL;
            }
        }

        ~ourmapp(){
            for(int i=0; i<num_buckets; i++){
                delete buckets[i];
            }
            delete[] buckets;
        }

        int getSize(){
            return size;
        }

        int getValue(string key){

        }

        private:
            int getBucketIndex(string key){
                int hashCode = 0;
                int p=1;
                for(int i = key.length()-1; i>=0; i--){
                    hashCode += key[i] * p;
                    hashCode = hashCode % num_buckets;
                    p*=37;
                    p = p%num_buckets;
                }

                return hashCode % num_buckets;
            }

        public:

        void insert(string key, int value){
            int bucketIndex = getBucketIndex(key);
            Node * head =buckets[bucketIndex];

            while(head != NULL){
                if(head->key == key){
                    head->value = value;
                    return;
                }
                head = head->next;
            }

            head = buckets[bucketIndex];
            Node *newNode = new Node(key, value);
            newNode->next = head;
            buckets[bucketIndex] = newNode;
            size++;
        }

        int remove(string key){

        }


};

int main(){

}