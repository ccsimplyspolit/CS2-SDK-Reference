#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x618
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_InfoVisibilityBox : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0600[0x4]; // 0x600
            std::int32_t m_nMode; // 0x604            
            Vector m_vBoxSize; // 0x608            
            bool m_bEnabled; // 0x614            
            uint8_t _pad0615[0x3];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_InfoVisibilityBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_InfoVisibilityBox) == 0x618);
    };
};
