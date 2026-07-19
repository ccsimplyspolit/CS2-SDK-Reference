#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4b8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nMode"
        // static metadata: MNetworkVarNames "Vector m_vBoxSize"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        #pragma pack(push, 1)
        class CInfoVisibilityBox : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a0[0x4]; // 0x4a0
            // metadata: MNetworkEnable
            std::int32_t m_nMode; // 0x4a4            
            // metadata: MNetworkEnable
            Vector m_vBoxSize; // 0x4a8            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x4b4            
            uint8_t _pad04b5[0x3];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoVisibilityBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoVisibilityBox) == 0x4b8);
    };
};
