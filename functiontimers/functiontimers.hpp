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
          if(  (uint16_t)internalTime32 - previousTime > interval){

         //   std::cout << "prev  " <<  previousTime << "  internal " << internalTime32  << "/n";
            previousTime = internalTime32;
            return true;
            
        }else{
            return false;
        }
    }
        bool timePassed32( uint32_t &previousTime, const uint32_t interval ){
       if( internalTime32 - previousTime > interval){
      //  if(  (uint32_t)(internalTime32 - previousTime) > interval){
         //   std::cout << "prev  " <<  previousTime << "  internal " << internalTime32  << "/n";
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
