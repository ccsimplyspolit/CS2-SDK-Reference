#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"

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
        // Size: 0xdc0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadel_DoorwayPortal> m_hLinkedDoorway"
        #pragma pack(push, 1)
        class CCitadel_DoorwayPortal : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ca8[0xf8]; // 0xca8
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hLinkedDoorway has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCitadel_DoorwayPortal> m_hLinkedDoorway;
            char m_hLinkedDoorway[0x4]; // 0xda0            
            uint8_t _pad0da4[0x1c];
            
            // Datamap fields:
            // CHandle< CBaseEntity > other_door; // 0x7fffffff
            // CHandle< CBaseEntity > portal_model; // 0x7fffffff
            // CUtlSymbolLarge looping_sound; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_DoorwayPortal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_DoorwayPortal) == 0xdc0);
    };
};
