#ifndef __BELL__
#define __BELL__

#include "iBell.h"
#include "SoundMaker.h"
template<class T = iBell>
class Bell : public SoundMaker<T>
   {
   private:
   protected:
   public:
      Bell() : SoundMaker<T>() {sound = "Ding";}
      void switchHammer() 
         {
         if(sound == "Ding")
            sound = "Dong";
         else
            sound = "Ding";
         }
   };


#endif