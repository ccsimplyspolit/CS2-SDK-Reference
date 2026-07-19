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
        // Size: 0x8e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAlignCameraOnAutoDismount"
        #pragma pack(push, 1)
        class CCitadelClimbRopeTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            bool m_bAlignCameraOnAutoDismount; // 0x8e0            
            uint8_t _pad08e1[0x3]; // 0x8e1
            CUtlStringToken m_tModifier; // 0x8e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelClimbRopeTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelClimbRopeTrigger) == 0x8e8);
    };
};
