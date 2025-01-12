#include "MR/ObjUtil.h"
#include "Actor/NameObj/NameObjExecuteHolder.h"

namespace MR
{
    void connectToScene(LiveActor *actor, s32 movementType, s32 calcAnimType, s32 drawBufType, s32 drawType)
    {
        MR::registerNameObjToExecuteHolder(actor, movementType, calcAnimType, drawBufType, drawType);
    }

    void connectToScene(NameObj *actor, s32 movementType, s32 calcAnimType, s32 drawBufType, s32 drawType)
    {
        MR::registerNameObjToExecuteHolder(actor, movementType, calcAnimType, drawBufType, drawType);
        MR::connectToSceneTemporarily(actor);
        MR::connectToDrawTemporarily(actor);
    }

    void connectToSceneCollisionMapObj(LiveActor *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x1E, 2, 8, -1);
    }

    void connectToSceneCollisionMapObjMovementCalcAnim(LiveActor *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x1E, 2, -1, -1);
    }

    void connectToSceneCollisionMapObjWeakLight(LiveActor *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x1E, 2, 9, -1);
    }

    void connectToSceneCollisionMapObjStrongLight(LiveActor *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x1E, 2, 0xA, -1);
    }

    void connectToSceneCollisionEnemy(LiveActor *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x1F, 3, 0x12, -1);
    }

    void connectToSceneCollisionEnemyMovement(NameObj *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x1F, -1, -1, -1);
        MR::connectToSceneTemporarily(actor);
        MR::connectToDrawTemporarily(actor);
    }

    void connectToSceneCollisionEnemyStrongLight(LiveActor *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x1F, 3, 0xA, -1);
    }

    void connectToSceneCollisionEnemyNoShadowedMapObjStrongLight(LiveActor *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x1F, 3, 0xC, -1);
    }

    void connectToSceneNpc(LiveActor *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x28, 6, 0x10, -1);
    }

    void connectToSceneNpcMovement(LiveActor *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x28, -1, -1, -1);
    }

    void connectToSceneRide(LiveActor *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x29, 7, 0x11, -1);
    }

    void connectToSceneEnemy(LiveActor *actor)
    {
        MR::registerNameObjToExecuteHolder(actor, 0x2A, 8, 0x12, -1);
    }
};