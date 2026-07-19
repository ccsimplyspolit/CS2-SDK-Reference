#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmTarget.hpp"
#include "source2sdk/client/CCS2WeaponGraphController.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x540
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCS2PawnGraphController : public source2sdk::client::CCS2WeaponGraphController
        {
        public:
            // m_bIsDefusing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bIsDefusing;
            char m_bIsDefusing[0x18]; // 0x2a0            
            // m_moveType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_moveType;
            char m_moveType[0x18]; // 0x2b8            
            // m_moveDirectionID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_moveDirectionID;
            char m_moveDirectionID[0x18]; // 0x2d0            
            // m_flMoveSpeedX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flMoveSpeedX;
            char m_flMoveSpeedX[0x18]; // 0x2e8            
            // m_flMoveSpeedY has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flMoveSpeedY;
            char m_flMoveSpeedY[0x18]; // 0x300            
            // m_flMoveSpeedHorizontal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flMoveSpeedHorizontal;
            char m_flMoveSpeedHorizontal[0x18]; // 0x318            
            // m_flPreviousMoveSpeedHorizontal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flPreviousMoveSpeedHorizontal;
            char m_flPreviousMoveSpeedHorizontal[0x18]; // 0x330            
            // m_flCrouchAmount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flCrouchAmount;
            char m_flCrouchAmount[0x18]; // 0x348            
            // m_bIsWalking has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bIsWalking;
            char m_bIsWalking[0x18]; // 0x360            
            // m_flWeaponDropAmount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flWeaponDropAmount;
            char m_flWeaponDropAmount[0x18]; // 0x378            
            // m_groundAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_groundAction;
            char m_groundAction[0x18]; // 0x390            
            // m_groundActionDirectionID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_groundActionDirectionID;
            char m_groundActionDirectionID[0x18]; // 0x3a8            
            // m_flGroundTurnAngleOrVelocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flGroundTurnAngleOrVelocity;
            char m_flGroundTurnAngleOrVelocity[0x18]; // 0x3c0            
            // m_flLadderCycle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flLadderCycle;
            char m_flLadderCycle[0x18]; // 0x3d8            
            // m_flLadderYaw has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flLadderYaw;
            char m_flLadderYaw[0x18]; // 0x3f0            
            // m_flLadderYawBackwards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flLadderYawBackwards;
            char m_flLadderYawBackwards[0x18]; // 0x408            
            // m_airAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_airAction;
            char m_airAction[0x18]; // 0x420            
            // m_flAirHeightAboveGround has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flAirHeightAboveGround;
            char m_flAirHeightAboveGround[0x18]; // 0x438            
            // m_leftFootTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<source2sdk::animlib::CNmTarget> m_leftFootTarget;
            char m_leftFootTarget[0x18]; // 0x450            
            // m_rightFootTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<source2sdk::animlib::CNmTarget> m_rightFootTarget;
            char m_rightFootTarget[0x18]; // 0x468            
            // m_flFlashedAmount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flFlashedAmount;
            char m_flFlashedAmount[0x18]; // 0x480            
            // m_flAimPitchAngle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flAimPitchAngle;
            char m_flAimPitchAngle[0x18]; // 0x498            
            // m_flAimYawAngle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flAimYawAngle;
            char m_flAimYawAngle[0x18]; // 0x4b0            
            // m_flinchHead has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_flinchHead;
            char m_flinchHead[0x18]; // 0x4c8            
            // m_flinchHeadRestart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_flinchHeadRestart;
            char m_flinchHeadRestart[0x18]; // 0x4e0            
            // m_flinchBody has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_flinchBody;
            char m_flinchBody[0x18]; // 0x4f8            
            // m_flinchBodyRestart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_flinchBodyRestart;
            char m_flinchBodyRestart[0x18]; // 0x510            
            // m_flinchIsOnFire has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_flinchIsOnFire;
            char m_flinchIsOnFire[0x18]; // 0x528            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCS2PawnGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCS2PawnGraphController) == 0x540);
    };
};
