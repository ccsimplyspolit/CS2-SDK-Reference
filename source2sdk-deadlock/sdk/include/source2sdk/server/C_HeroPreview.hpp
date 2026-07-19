#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CCitadelHeroComponent.hpp"

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
        // Size: 0x4e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
        #pragma pack(push, 1)
        class C_HeroPreview : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelHeroComponent"
            // metadata: MNetworkAlias "CCitadelHeroComponent"
            // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
            source2sdk::server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x4a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_HeroPreview because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::C_HeroPreview) == 0x4e0);
    };
};
