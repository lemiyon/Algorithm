//
//  Heap.cpp
//  AlgorithmC++
//
//  Created by 김윤철 on 2016. 4. 19..
//  Copyright © 2016년 bolastudy. All rights reserved.
//

/*
 우선순위 큐의 한 종류인 자료구조 HEAP을 구현한다.
 이 힙은 최소 힙이다.
 */


#include "Heap.hpp"

    //기본 생성자
Heap::Heap() {
        this->heap = vector<int>();
    }
    
    //Heap에 푸시한다. 성공, 실패 여부 반환
bool Heap::push(int newElement) {
        
    //이것이 처음 원소라면 추가하고 바로 종료한다.
    if(heap.size() == 0) {
        heap.push_back(newElement);
        return true;
    }
        
    //완전 이진 트리를 깨지 않기 위해, 가장 뒤에 원소를 추가한다.
    heap.insert(heap.end(), newElement);
    
    
    //힙화 시킨다.
    
    //루트에 이를 때 까지 자신의 부모를 확인해, 자신의 부모보다 자신이 작으면 자리를 바꾼다. 루트에 이르면 멈춘다.
    //배열에서 완전 이진 트리를 표현할 때, 부모는 항상 자신의 인덱스의 /2위치에 있다.
    //예를 들어, 5개가 있을 때, 루트 = 0 5번의 부모는 2번이다. 3번의 부모는 1이다. 4번의 부모는 1번이다.?
    for(int i = heap.size(); i >= 0; i += 2i) {
    }
        
        return true;
    }
    
    //Heap에서 루트원소를 팝한다.
int Heap::pop() {
    
    //루트 원소를 잘라낸다.
    int root = this->heap.front();
    //꺠진 힙을 다시 맞춰준다.
    
    return root;
    }
