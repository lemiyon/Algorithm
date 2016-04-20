//
//  Heap.hpp
//  AlgorithmC++
//
//  Created by 김윤철 on 2016. 4. 19..
//  Copyright © 2016년 bolastudy. All rights reserved.
//

#ifndef Heap_hpp
#define Heap_hpp

/*
 우선순위 큐의 한 종류인 자료구조 HEAP을 구현한다.
 이 힙은 최소 힙이다.
 */

#include <stdio.h>
#import <vector>
using namespace std;

class Heap {
    
    private :
    vector<int> heap; //원소들을 저장할 장소. 배열로 힙의 특징인 완전 이진 트리를 구현한다.
   
    
    public :
    //기본 생성자
    Heap();
    
    //Heap에 푸시한다. 성공, 실패 여부 반환
    bool push(int newElement);
    
    //Heap에서 루트원소를 팝한다.
    int pop();

    
};

#endif /* Heap_hpp */
