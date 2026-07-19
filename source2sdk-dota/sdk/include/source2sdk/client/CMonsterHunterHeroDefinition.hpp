#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CMonsterHunterMaterialDropDefinition.hpp"
#include "source2sdk/client/HeroID_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMonsterHunterHeroDefinition
        {
        public:
            source2sdk::client::HeroID_t m_nHeroID; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // m_vecMaterialDrops has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterMaterialDropDefinition> m_vecMaterialDrops;
            char m_vecMaterialDrops[0x18]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroDefinition, m_nHeroID) == 0x0);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroDefinition, m_vecMaterialDrops) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterHeroDefinition) == 0x20);
    };
};
