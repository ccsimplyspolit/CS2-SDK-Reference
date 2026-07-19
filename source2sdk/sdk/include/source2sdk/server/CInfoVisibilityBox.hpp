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
        // Size: 0x4c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoVisibilityBox : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a8[0x4]; // 0x4a8
            std::int32_t m_nMode; // 0x4ac            
            Vector m_vBoxSize; // 0x4b0            
            bool m_bEnabled; // 0x4bc            
            uint8_t _pad04bd[0x3];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoVisibilityBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoVisibilityBox) == 0x4c0);
    };
};
