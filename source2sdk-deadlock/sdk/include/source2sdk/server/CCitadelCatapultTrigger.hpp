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
        // Size: 0x8f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vLaunchTarget"
        // static metadata: MNetworkVarNames "float m_flLaunchSpeed"
        #pragma pack(push, 1)
        class CCitadelCatapultTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vLaunchTarget; // 0x8e0            
            // metadata: MNetworkEnable
            float m_flLaunchSpeed; // 0x8ec            
            CUtlSymbolLarge m_nameTarget; // 0x8f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelCatapultTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelCatapultTrigger) == 0x8f8);
    };
};
