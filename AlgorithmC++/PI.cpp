//
//  PI.cpp
//  AlgorithmC++
//
//  Created by 김윤철 on 2016. 3. 31..
//  Copyright © 2016년 bolastudy. All rights reserved.
//

#include "PI.hpp"

//잘라낸 조각의 난이도를 반환한다.
int classify(int a, int b) {
    //숫자 조각을 갖고 온다.
    string M = N.substr(a, b-a+1);
    //첫 글자만으로 이루어진 문자열과 같으면 난이도는 1
    if(M == string(M.size(), M[0])) return 1;
    
    //등차수열인지 검사한다.
    bool progressive = true;
    for(int i = 0; i < M.size() - 1; ++i) {
        if(M[i + 1] - M[i] != M[1] - M[0]) progressive = false;
        
    }  //등차 수열이고 공차가 1 혹은 -1이면 난이도는 1
        if(progressive && abs(M[1] - M[0]) == 1) {
            return 2;
        }
        
        //두 수가 번갈아 등장하는지 확인한다.
        bool alternating = true;
        for(int i = 0; i < M.size(); ++i) {
            if(M[i] != M[i % 2]) {
                alternating = false;
            }
        }
        
        if(alternating) return 4; //두 수가 번갈아 등장하면 난이도는 4
        if(progressive) return 5; // 공차가 1이 아닌 등차수열의 난이도는 5
        
    return 10; //이 외에는 모두 난이도 10
}




int memorize(int begin) {
 //기저 사례 : 수열의 끝에 도달했다.
    if(begin == N.size()) return 0;
    
    //메모이제이션
    int& ret = cache[begin];
    if(ret != -1) return ret;
    ret = INF;
    
    //
    for(int L = 3; L <= 5; L++) {
        if(begin + L <= N.size()) {
            ret = min(ret, memorize(begin+L) + classify(begin, begin + L -1 ));
        }
    }
    
    return ret;
}



