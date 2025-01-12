#ifndef ACTORSENSORUTIL_H
#define ACTORSENSORUTIL_H

#include "Actor/LiveActor/LiveActor.h"

namespace MR
{
    bool tryUpdateHitSensorsAll(LiveActor *);
    void updateHitSensorsAll(LiveActor *);
    void clearHitSensors(LiveActor *);
    HitSensor* getTaken(const LiveActor *);
    HitSensor* getTaking(const LiveActor *);

    u32 setHitSensorApart(HitSensor *, HitSensor *);
};

#endif // ACTORSENSORUTIL_H