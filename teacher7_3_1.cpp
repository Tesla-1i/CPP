#include <iostream>
using namespace std;

template<class T> // T为结点类型
struct Node       // 结构结点
{     Node* pNext;
        T  data ;    
};

template<class T1>      
class List{
public:
    List(){

    } 
    ~List(){
    	delete pFirst;
    }
    void Add( T1&);         // 添加结点
    void Remove( T1&);  // 删除节点
    void PrintList( );     // 遍历链表
    Node *pFirst;       //链首结点指针
};

template<class T1>
void List<T1>::Add(T1& t1 ){
	
}

template<class T1>
void List<T1>::Remove(T1& t1 )