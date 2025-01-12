#ifndef JKRFILELOADER_H
#define JKRFILELOADER_H

#include "JKR/JKRDisposer.h"

class JKRFileLoader : public JKRDisposer
{
public:
    JKRFileLoader();
    
    virtual ~JKRFileLoader();
    virtual void unmount();

    JSUPtrLink _18;
    u32 _28;
    u32 _2C;
    u32 _30;
    u32 _34;
};

#endif // JKRFILELOADER_H