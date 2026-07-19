#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"

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
        // Size: 0xbd0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "CHandle< CCitadel_DoorwayPortal> m_hLinkedDoorway"
        #pragma pack(push, 1)
        class CCitadel_DoorwayPortal : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xa90            
            uint8_t _pad0ab0[0xf8]; // 0xab0
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hLinkedDoorway has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_DoorwayPortal> m_hLinkedDoorway;
            char m_hLinkedDoorway[0x4]; // 0xba8            
            uint8_t _pad0bac[0x24];
            
            // Datamap fields:
            // CHandle< CBaseEntity > other_door; // 0x7fffffff
            // CHandle< CBaseEntity > portal_model; // 0x7fffffff
            // CUtlSymbolLarge looping_sound; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_DoorwayPortal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_DoorwayPortal) == 0xbd0);
    };
};
