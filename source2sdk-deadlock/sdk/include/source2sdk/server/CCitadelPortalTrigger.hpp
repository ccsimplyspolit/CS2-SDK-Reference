#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x900
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadelPortalTrigger > m_hOtherPortal"
        #pragma pack(push, 1)
        class CCitadelPortalTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad08e0[0x18]; // 0x8e0
            // metadata: MNetworkEnable
            // m_hOtherPortal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelPortalTrigger> m_hOtherPortal;
            char m_hOtherPortal[0x4]; // 0x8f8            
            uint8_t _pad08fc[0x4];
            
            // Datamap fields:
            // Vector trigger_mins; // 0x7fffffff
            // Vector trigger_maxs; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPortalTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPortalTrigger) == 0x900);
    };
};
