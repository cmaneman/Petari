#include "Map/Graph/RailGraphEdge.h"

RailGraphEdge::RailGraphEdge()
{
    this->mDistance = 0.0f;
    this->mPrev = -1;
    this->mNext = -1;
    this->_C = -1;
    this->_10 = -1;
    this->mPointArg0 = -1;
    this->mPointArg1 = -1;
    this->mPointArg2 = -1;
    this->mPointArg3 = -1;
    this->mPointArg4 = -1;
    this->mPointArg5 = -1;
    this->mPointArg6 = -1;
    this->mPointArg7 = -1;
}

void RailGraphEdge::clearConnectInfo()
{
    this->mDistance = 0.0f;
    this->mPrev = -1;
    this->mNext = -1;
    this->_C = -1;
    this->_10 = -1;
}

s32 RailGraphEdge::getNextNode(s32 a1) const
{
    if (this->mPrev == a1)
        return this->mNext;

    if (this->mNext != a1)
        return -1;

    return this->mPrev;
}

s32 RailGraphEdge::getNextEdge(s32 a1) const
{
    if (this->mPrev == a1)
        return this->_C;

    if (this->mPrev == a1)
        return this->_10;

    return -1;
}

void RailGraphEdge::setNextEdge(s32 a1, s32 a2)
{
    if (this->mPrev == a2)
        this->_C = a1;

    if (this->mNext == a2)
        return;

    this->_10 = a1;
}

void RailGraphEdge::setArgs(const JMapInfo *info, s32 a2)
{
    info->getValue<s32>(a2, "point_arg0", &this->mPointArg0);
    info->getValue<s32>(a2, "point_arg1", &this->mPointArg1);
    info->getValue<s32>(a2, "point_arg2", &this->mPointArg2);
    info->getValue<s32>(a2, "point_arg3", &this->mPointArg3);
    info->getValue<s32>(a2, "point_arg4", &this->mPointArg4);
    info->getValue<s32>(a2, "point_arg5", &this->mPointArg5);
    info->getValue<s32>(a2, "point_arg6", &this->mPointArg6);
    info->getValue<s32>(a2, "point_arg7", &this->mPointArg7);
}