#ifndef BPKPLAYER_H
#define BPKPLAYER_H

#include "Animation/AnmPlayer.h"
#include "Model/J3D/J3DModel.h"
#include "System/Resource/ResourceHolder.h"

class BpkPlayer : public MaterialAnmPlayerBase
{
public:
    BpkPlayer(const ResourceHolder *, J3DModelData *);

    virtual void attach(J3DAnmBase *, J3DModelData *);
    virtual void detach(J3DAnmBase *, J3DModelData *);
};

#endif // BPKPLAYER_H