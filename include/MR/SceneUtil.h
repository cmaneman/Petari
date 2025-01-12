#ifndef SCENEUTIL_H
#define SCENEUTIL_H

#include "JMap/JMapInfo.h"
#include "JMap/JMapInfoIter.h"

namespace MR
{
    void getRailInfo(JMapInfoIter *, const JMapInfo **, const JMapInfoIter &);
    void getCameraRailInfo(JMapInfoIter *, const JMapInfo **, s32, s32);
};

#endif // SCENEUTIL_H