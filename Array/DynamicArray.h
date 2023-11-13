//implementation of synamic array
#include<bits/stdc++.h>
using namespace std;

class Array{
    public:
    int sz=0;
    int actualSize=1;
    int *arr;

    Array(){
    }
    Array(int capacity){
            if(capacity<0)throw invalid_argument("invalid size");
            this->actualSize=capacity;
            arr=new int[capacity];
    }
    int size(){
        return sz;
    }
    bool isEmpty(){
        return size()==0;
    }
    int get(int index){return arr[index];}

    void set(int index,int val){arr[index]=val;}

    void clear(){
        for(int i=0;i<actualSize;i++){
            arr[i]=0;
        }
        sz=0;
    }
    void add(int ele){
        if(sz+1>=actualSize){
            if(actualSize==0)actualSize=1;
            else actualSize*=2;
            int *arr2=new int[actualSize];
            for(int i=0;i<sz;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[sz++]=ele;
    }
    int removeAt(int index){
        if(index<0 or index>=sz)throw std::out_of_range ("blah");
        int data=arr[index];
        int *arr2=new int[actualSize-1];
        for(int i=0,j=0;i<sz;i++,j++){
            if(i==index)j--;
            else arr2[j]=arr[i];
        }
        arr=arr2;
        actualSize=--sz;
        return data;
    }

    bool remove(int val){
        for(int i=0;i<sz;i++){
            if(arr[i]==val){
                removeAt(i);
                return true;
            }
        }
        return false;
    }
    int indexOf(int val){
        for(int i=0;i<sz;i++){
            if(val==arr[i])return i;  
        }
        return -1;
    }
    bool contains(int val){
        return indexOf(val)!=-1;
    }
};
