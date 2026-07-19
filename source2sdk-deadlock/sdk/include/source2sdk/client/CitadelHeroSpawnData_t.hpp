#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroBadgeXP_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "HeroID_t m_nHeroID"
        // static metadata: MNetworkVarNames "HeroBadgeXP_t m_unHeroBadgeXP"
        #pragma pack(push, 1)
        struct CitadelHeroSpawnData_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nHeroID; // 0x8            
            // metadata: MNetworkEnable
            source2sdk::client::HeroBadgeXP_t m_unHeroBadgeXP; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelHeroSpawnData_t, m_nHeroID) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelHeroSpawnData_t, m_unHeroBadgeXP) == 0xc);
        
        static_assert(sizeof(source2sdk::client::CitadelHeroSpawnData_t) == 0x10);
    };
};
