#ifndef DISPLAYLISTMAKER_H
#define DISPLAYLISTMAKER_H

#include "Model/J3D/J3DModel.h"
#include "System/Resource/ResourceHolder.h"

class DisplayListMaker
{
public:
    DisplayListMaker(J3DModel *, const ResourceHolder *);

    void update();
    void diff();
    void newDifferedDisplayList();
    bool isValidDiff();
    void onPrgFlag(u16, u32);
    void onCurFlag(u16, u32);

    static bool isExistDiffMaterial(const J3DModelData *);
};

#endif // DISPLAYLISTMAKER_H