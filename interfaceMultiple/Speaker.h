#ifndef __SPEAKER__
#define __SPEAKER__

#include "iSpeaker.h"
#include "SoundMaker.h"
template<class T = iSpeaker>
class Speaker : public SoundMaker<T>
   {
   private:
   protected:
   public:
      Speaker() : SoundMaker<T>() {}
      void increaseVolume()
         {
         sound += "!";
         }
   };


#endif