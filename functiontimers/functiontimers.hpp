//
//  functiontimers.hpp
//  functiontimers
//
//  Created by Dorian Tolman on 2/10/21.
//  Copyright © 2021 Dorian Tolman. All rights reserved.
//

#ifndef functiontimers_hpp
#define functiontimers_hpp

#include <iostream>

class Timer {
public:
    uint32_t internalTime32;
    
    bool timePassed16( uint16_t &previousTime, const uint16_t interval ){
        
        if(  (uint32_t)(internalTime32 - previousTime) > interval){
            
            previousTime = internalTime32;
            return true;
            
        }else{
            return false;
        }
    }
    
    void currentTime(uint32_t inputMillis){
        internalTime32 = inputMillis;
        
    }
    
};

#endif /* functiontimers_hpp */
