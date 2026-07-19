#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_BaseNPCGraphController.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_CitadelNPC_GraphController : public source2sdk::client::CAI_BaseNPCGraphController
        {
        public:
            // m_flRandomSeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flRandomSeed;
            char m_flRandomSeed[0x18]; // 0x500            
            // m_flTimeScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flTimeScale;
            char m_flTimeScale[0x18]; // 0x518            
            // m_flHealthPct has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flHealthPct;
            char m_flHealthPct[0x18]; // 0x530            
            // m_bHasTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bHasTarget;
            char m_bHasTarget[0x18]; // 0x548            
            // m_bInAir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bInAir;
            char m_bInAir[0x18]; // 0x560            
            // m_flMoveSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flMoveSpeed;
            char m_flMoveSpeed[0x18]; // 0x578            
            // m_flForwardSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flForwardSpeed;
            char m_flForwardSpeed[0x18]; // 0x590            
            // m_flStrafeSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flStrafeSpeed;
            char m_flStrafeSpeed[0x18]; // 0x5a8            
            // m_flVerticalSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flVerticalSpeed;
            char m_flVerticalSpeed[0x18]; // 0x5c0            
            // m_flLookHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flLookHeading;
            char m_flLookHeading[0x18]; // 0x5d8            
            // m_flLookPitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_flLookPitch;
            char m_flLookPitch[0x18]; // 0x5f0            
            // m_vLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<Vector> m_vLookTarget;
            char m_vLookTarget[0x18]; // 0x608            
            // m_bMeleeAttack has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bMeleeAttack;
            char m_bMeleeAttack[0x18]; // 0x620            
            // m_bRangedAttack has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bRangedAttack;
            char m_bRangedAttack[0x18]; // 0x638            
            // m_bKill has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bKill;
            char m_bKill[0x18]; // 0x650            
            // m_eFlinch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_eFlinch;
            char m_eFlinch[0x18]; // 0x668            
            // m_nHitLayerTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<std::int32_t> m_nHitLayerTrigger;
            char m_nHitLayerTrigger[0x28]; // 0x680            
            // m_pszDamageState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszDamageState;
            char m_pszDamageState[0x30]; // 0x6a8            
            // m_flHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flHealth;
            char m_flHealth[0x28]; // 0x6d8            
            // m_flTimeScale1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flTimeScale1;
            char m_flTimeScale1[0x28]; // 0x700            
            // m_bBeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bBeam;
            char m_bBeam[0x28]; // 0x728            
            // m_bCrouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bCrouching;
            char m_bCrouching[0x28]; // 0x750            
            // m_bInAir1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bInAir1;
            char m_bInAir1[0x28]; // 0x778            
            // m_bHasTarget1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bHasTarget1;
            char m_bHasTarget1[0x28]; // 0x7a0            
            // m_bReloading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bReloading;
            char m_bReloading[0x28]; // 0x7c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_CitadelNPC_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_CitadelNPC_GraphController) == 0x7f0);
    };
};
