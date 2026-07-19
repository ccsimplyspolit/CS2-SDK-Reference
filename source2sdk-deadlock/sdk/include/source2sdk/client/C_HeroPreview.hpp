#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelHeroComponent.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x630
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
        #pragma pack(push, 1)
        class C_HeroPreview : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelHeroComponent"
            // metadata: MNetworkAlias "CCitadelHeroComponent"
            // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
            source2sdk::client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x5f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_HeroPreview because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_HeroPreview) == 0x630);
    };
};
