#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelHeroSpawnData_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/entity2/CEntityComponent.hpp"

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
        // Standard-layout class: false
        // Size: 0x40
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "CitadelHeroSpawnData_t m_spawnedHero"
        // static metadata: MNetworkVarNames "CitadelHeroSpawnData_t m_loadingHero"
        // static metadata: MNetworkVarNames "HeroID_t m_nNoSpawnHeroID"
        #pragma pack(push, 1)
        class CCitadelHeroComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x10]; // 0x8
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHeroChanged"
            source2sdk::client::CitadelHeroSpawnData_t m_spawnedHero; // 0x18            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::client::CitadelHeroSpawnData_t m_loadingHero; // 0x28            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nNoSpawnHeroID; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelHeroComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelHeroComponent) == 0x40);
    };
};
