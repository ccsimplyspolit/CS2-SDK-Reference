#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
    };
};

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
        // Size: 0x11c8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BaseGrenade : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bHasWarnedAI; // 0x1180            
            bool m_bIsSmokeGrenade; // 0x1181            
            bool m_bIsLive; // 0x1182            
            uint8_t _pad1183[0x1]; // 0x1183
            float m_DmgRadius; // 0x1184            
            source2sdk::entity2::GameTime_t m_flDetonateTime; // 0x1188            
            float m_flWarnAITime; // 0x118c            
            float m_flDamage; // 0x1190            
            uint8_t _pad1194[0x4]; // 0x1194
            CUtlSymbolLarge m_iszBounceSound; // 0x1198            
            CUtlString m_ExplosionSound; // 0x11a0            
            // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hThrower;
            char m_hThrower[0x4]; // 0x11a8            
            uint8_t _pad11ac[0x14]; // 0x11ac
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0x11c0            
            // m_hOriginalThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hOriginalThrower;
            char m_hOriginalThrower[0x4]; // 0x11c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseGrenade) == 0x11c8);
    };
};
