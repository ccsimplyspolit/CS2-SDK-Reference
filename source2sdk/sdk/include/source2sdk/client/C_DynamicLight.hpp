#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

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
        // Size: 0xfd8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_DynamicLight : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNotSaved
            std::uint8_t m_Flags; // 0xfb0            
            // metadata: MNotSaved
            std::uint8_t m_LightStyle; // 0xfb1            
            uint8_t _pad0fb2[0x2]; // 0xfb2
            // metadata: MNotSaved
            float m_Radius; // 0xfb4            
            // metadata: MNotSaved
            std::int32_t m_Exponent; // 0xfb8            
            // metadata: MNotSaved
            float m_InnerAngle; // 0xfbc            
            // metadata: MNotSaved
            float m_OuterAngle; // 0xfc0            
            // metadata: MNotSaved
            float m_SpotRadius; // 0xfc4            
            uint8_t _pad0fc8[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DynamicLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DynamicLight) == 0xfd8);
    };
};
