#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC_GraphController.hpp"

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
        // Size: 0xad8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Boss_Tier2_GraphController : public source2sdk::server::CAI_CitadelNPC_GraphController
        {
        public:
            // m_pszActivity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszActivity;
            char m_pszActivity[0x30]; // 0x7f0            
            // m_pszStompAttack has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszStompAttack;
            char m_pszStompAttack[0x30]; // 0x820            
            // m_pszStaggerDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszStaggerDirection;
            char m_pszStaggerDirection[0x30]; // 0x850            
            // m_pszElectricBeamPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszElectricBeamPosition;
            char m_pszElectricBeamPosition[0x30]; // 0x880            
            // m_bStunEnding has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bStunEnding;
            char m_bStunEnding[0x28]; // 0x8b0            
            CAnimGraphTagRef m_sStaggered; // 0x8d8            
            CAnimGraphTagRef m_sStomp; // 0x8f8            
            uint8_t _pad0918[0x8]; // 0x918
            CAnimGraphTagRef m_sApplyStompDamage; // 0x920            
            // b_Death has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> b_Death;
            char b_Death[0x18]; // 0x940            
            // b_InCombat has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> b_InCombat;
            char b_InCombat[0x18]; // 0x958            
            // fl_lookHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> fl_lookHeading;
            char fl_lookHeading[0x18]; // 0x970            
            // fl_LookPitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> fl_LookPitch;
            char fl_LookPitch[0x18]; // 0x988            
            // b_AbilityLongRange has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> b_AbilityLongRange;
            char b_AbilityLongRange[0x18]; // 0x9a0            
            // b_AbilitySpecial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> b_AbilitySpecial;
            char b_AbilitySpecial[0x18]; // 0x9b8            
            // b_Melee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> b_Melee;
            char b_Melee[0x18]; // 0x9d0            
            // b_Stagger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> b_Stagger;
            char b_Stagger[0x18]; // 0x9e8            
            // fl_LeftHeadLookHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> fl_LeftHeadLookHeading;
            char fl_LeftHeadLookHeading[0x18]; // 0xa00            
            // fl_LeftHeadLookPitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> fl_LeftHeadLookPitch;
            char fl_LeftHeadLookPitch[0x18]; // 0xa18            
            // fl_MidHeadLookHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> fl_MidHeadLookHeading;
            char fl_MidHeadLookHeading[0x18]; // 0xa30            
            // fl_MidHeadLookPitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> fl_MidHeadLookPitch;
            char fl_MidHeadLookPitch[0x18]; // 0xa48            
            // fl_RightHeadLookHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> fl_RightHeadLookHeading;
            char fl_RightHeadLookHeading[0x18]; // 0xa60            
            // fl_RightHeadLookPitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> fl_RightHeadLookPitch;
            char fl_RightHeadLookPitch[0x18]; // 0xa78            
            // m_BossActionSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_BossActionSource;
            char m_BossActionSource[0x18]; // 0xa90            
            // m_BossAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_BossAction;
            char m_BossAction[0x18]; // 0xaa8            
            // m_eTurn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_eTurn;
            char m_eTurn[0x18]; // 0xac0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier2_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Boss_Tier2_GraphController) == 0xad8);
    };
};
