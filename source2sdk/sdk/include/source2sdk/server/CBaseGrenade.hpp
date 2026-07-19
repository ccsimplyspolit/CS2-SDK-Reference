#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x9f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseGrenade : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0960[0x8]; // 0x960
            bool m_bDamageDetonating; // 0x968            
            uint8_t _pad0969[0x7]; // 0x969
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0x970            
            source2sdk::entity2::CEntityIOOutput m_OnExplode; // 0x988            
            bool m_bHasWarnedAI; // 0x9a0            
            bool m_bIsSmokeGrenade; // 0x9a1            
            bool m_bIsLive; // 0x9a2            
            uint8_t _pad09a3[0x1]; // 0x9a3
            float m_DmgRadius; // 0x9a4            
            source2sdk::entity2::GameTime_t m_flDetonateTime; // 0x9a8            
            float m_flWarnAITime; // 0x9ac            
            float m_flDamage; // 0x9b0            
            uint8_t _pad09b4[0x4]; // 0x9b4
            CUtlSymbolLarge m_iszBounceSound; // 0x9b8            
            CUtlString m_ExplosionSound; // 0x9c0            
            // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hThrower;
            char m_hThrower[0x4]; // 0x9c8            
            uint8_t _pad09cc[0x14]; // 0x9cc
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0x9e0            
            // m_hOriginalThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hOriginalThrower;
            char m_hOriginalThrower[0x4]; // 0x9e4            
            uint8_t _pad09e8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseGrenade) == 0x9f0);
    };
};
