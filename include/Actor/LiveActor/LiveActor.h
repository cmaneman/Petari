#ifndef LIVEACTOR_H
#define LIVEACTOR_H

#include "Actor/Animation/ActorAnimKeeper.h"
#include "Actor/Camera/ActorPadAndCameraCtrl.h"
#include "Actor/Effect/EffectKeeper.h"
#include "Actor/Light/ActorLightCtrl.h"
#include "Actor/LiveActor/LiveActorFlag.h"
#include "Actor/NameObj/NameObj.h"
#include "Actor/Nerve/Spine.h"
#include "Actor/Rail/RailRider.h"
#include "Actor/Sensor/HitSensor.h"
#include "Actor/Sensor/HitSensorKeeper.h"
#include "Actor/Shadow/ShadowController.h"
#include "Actor/Sound/AudAnmSoundObject.h"
#include "Actor/StarPointer/StarPointerTarget.h"
#include "Actor/Switch/StageSwitch.h"
#include "Collision/Binder.h"
#include "JGeometry/TVec3.h"
#include "Model/ModelManager.h"

class LiveActor : public NameObj
{
public:
    LiveActor(const char *);

    virtual ~LiveActor();

    virtual void init(JMapInfoIter const &);
    virtual void movement();
    virtual void calcAnim();
    virtual void calcViewAndEntry();
    virtual void appear();
    virtual void makeActorAppeared();
    virtual void kill();
    virtual void makeActorDead();
    virtual u32 receiveMessage(u32, HitSensor *, HitSensor *);
    virtual Mtx* getBaseMtx() const;
    virtual Mtx* getTakingMtx() const;
    virtual void startClipped();
    virtual void endClipped();
    virtual void control();
    virtual void calcAndSetBaseMtx();
    virtual void updateHitSensor(HitSensor *);
    virtual void attackSensor(HitSensor *, HitSensor *);
    virtual u32 receiveMsgPush(HitSensor *, HitSensor *);
    virtual u32 receiveMsgPlayerAttack(u32, HitSensor *, HitSensor *);
    virtual u32 receiveMsgEnemyAttack(u32, HitSensor *, HitSensor *);
    virtual u32 receiveMsgTake(HitSensor *, HitSensor *);
    virtual u32 receiveMsgTaken(HitSensor *, HitSensor *);
    virtual u32 receiveMsgThrow(HitSensor *, HitSensor *);
    virtual u32 receiveMsgApart(HitSensor *, HitSensor *);
    virtual u32 receiveMsgOtherMsg(u32, HitSensor *, HitSensor *);

    void calcAnmMtx();
    void setNerve(const Nerve *);
    bool isNerve(const Nerve *) const;
    u32 getNerveStep() const;
    HitSensor* getSensor(const char *) const;
    void initModelManagerWithAnm(const char *, const char *, bool);
    void initNerve(const Nerve *);
    void initHitSensor(s32);
    void initBinder(f32, f32, u32);
    void initRailRider(const JMapInfoIter &);
    void initEffectKeeper(s32, const char *, bool);
    void initSound(s32, bool);
    void initShadowControllerList(u32);
    void initStageSwitch(const JMapInfoIter &);
    void initActorStarPointerTarget(f32, const JGeometry::TVec3<f32> *, Mtx *, JGeometry::TVec3<f32>);
    void initActorLightCtrl();
    void addToSoundObjHolder();
    void updateBinder();

    JGeometry::TVec3<f32> mTranslation; // _C
    JGeometry::TVec3<f32> mRotation; // _18
    JGeometry::TVec3<f32> mScale; // _24
    JGeometry::TVec3<f32> mVelocity; // _30
    JGeometry::TVec3<f32> mGravity; // _3C
    ModelManager* mModelManager; // _48
    ActorAnimKeeper* mAnimKeeper; // _4C
    Spine* mSpine; // _50
    HitSensorKeeper* mSensorKeeper; //_54
    Binder* mBinder; // _58
    RailRider* mRailRider; // _5C
    EffectKeeper* mEffectKeeper; // _60
    AudAnmSoundObject* mSoundObj; // _64
    LiveActorFlag mFlags; // _68
    ShadowControllerList* mShadowController; // _74
    u32* _78; // CollisionParts*
    StageSwitchCtrl* mStageSwitchCtrl; // _7C
    StarPointerTarget* mPointerTarget; // _80
    ActorLightCtrl* mLightCtrl; // _84
    ActorPadAndCameraCtrl* mCameraCtrl; // _88

    const static f32 zero;
    const static f32 one;
    const static f32 neg_one;
};

const f32 LiveActor::zero = 0.0f;
const f32 LiveActor::one = 1.0f;
const f32 LiveActor::neg_one = -1.0f;

#endif // LIVEACTOR_H