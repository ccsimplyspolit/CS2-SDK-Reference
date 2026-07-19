#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Size: 0xa98
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vLaunchTarget"
        // static metadata: MNetworkVarNames "float m_flLaunchSpeed"
        #pragma pack(push, 1)
        class CCitadelCatapultTrigger : public source2sdk::client::C_BaseTrigger
        {
        public:
            uint8_t _pad0a78[0x4]; // 0xa78
            // metadata: MNetworkEnable
            Vector m_vLaunchTarget; // 0xa7c            
            // metadata: MNetworkEnable
            float m_flLaunchSpeed; // 0xa88            
            uint8_t _pad0a8c[0x4]; // 0xa8c
            CUtlSymbolLarge m_nameTarget; // 0xa90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelCatapultTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelCatapultTrigger) == 0xa98);
    };
};
