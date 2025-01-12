#ifndef AUDANMSOUNDOBJECT_H
#define AUDANMSOUNDOBJECT_H

#include "Actor/Sound/AudSoundObject.h"
#include "JKR/JKRHeap.h"

class AudAnmSoundObject : public AudSoundObject
{
public:
    AudAnmSoundObject(JGeometry::TVec3<f32>*, u8, JKRHeap *);

    u8 _48[0x74-0x48];
};

#endif // AUDANMSOUNDOBJECT_H