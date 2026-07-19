#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

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
        // Size: 0x390
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelPlayerPawn_GraphController2 : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            uint8_t _pad0090[0x30]; // 0x90
            // m_flTimeScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_flTimeScale;
            char m_flTimeScale[0x18]; // 0xc0            
            // m_flForwardSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_flForwardSpeed;
            char m_flForwardSpeed[0x18]; // 0xd8            
            // m_flLookHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_flLookHeading;
            char m_flLookHeading[0x18]; // 0xf0            
            // m_flLookPitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_flLookPitch;
            char m_flLookPitch[0x18]; // 0x108            
            // m_flMoveSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_flMoveSpeed;
            char m_flMoveSpeed[0x18]; // 0x120            
            // m_flStrafeSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_flStrafeSpeed;
            char m_flStrafeSpeed[0x18]; // 0x138            
            // m_flVerticalSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_flVerticalSpeed;
            char m_flVerticalSpeed[0x18]; // 0x150            
            // m_flRandomSeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_flRandomSeed;
            char m_flRandomSeed[0x18]; // 0x168            
            // m_vLocomotionFacing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<Vector> m_vLocomotionFacing;
            char m_vLocomotionFacing[0x18]; // 0x180            
            // m_vLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<Vector> m_vLookTarget;
            char m_vLookTarget[0x18]; // 0x198            
            // m_HeroActionSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_HeroActionSource;
            char m_HeroActionSource[0x18]; // 0x1b0            
            // m_HeroAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_HeroAction;
            char m_HeroAction[0x18]; // 0x1c8            
            // m_HeroState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_HeroState;
            char m_HeroState[0x18]; // 0x1e0            
            // m_InstantCast has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_InstantCast;
            char m_InstantCast[0x18]; // 0x1f8            
            // m_AltCast has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_AltCast;
            char m_AltCast[0x18]; // 0x210            
            // m_BaseAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_BaseAction;
            char m_BaseAction[0x18]; // 0x228            
            // m_BaseState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_BaseState;
            char m_BaseState[0x18]; // 0x240            
            // m_FlinchType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_FlinchType;
            char m_FlinchType[0x18]; // 0x258            
            // m_CrouchFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_CrouchFraction;
            char m_CrouchFraction[0x18]; // 0x270            
            // m_MoveType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_MoveType;
            char m_MoveType[0x18]; // 0x288            
            // m_CornerLean has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_CornerLean;
            char m_CornerLean[0x18]; // 0x2a0            
            // m_Environment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_Environment;
            char m_Environment[0x18]; // 0x2b8            
            // m_flDirectionCommitment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flDirectionCommitment;
            char m_flDirectionCommitment[0x18]; // 0x2d0            
            uint8_t _pad02e8[0x28]; // 0x2e8
            bool m_bInGraphParamUpdateFlow; // 0x310            
            uint8_t _pad0311[0x7f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayerPawn_GraphController2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelPlayerPawn_GraphController2) == 0x390);
    };
};
