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
        // Size: 0xab0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_DynamicLight : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNotSaved
            std::uint8_t m_Flags; // 0xa88            
            // metadata: MNotSaved
            std::uint8_t m_LightStyle; // 0xa89            
            uint8_t _pad0a8a[0x2]; // 0xa8a
            // metadata: MNotSaved
            float m_Radius; // 0xa8c            
            // metadata: MNotSaved
            std::int32_t m_Exponent; // 0xa90            
            // metadata: MNotSaved
            float m_InnerAngle; // 0xa94            
            // metadata: MNotSaved
            float m_OuterAngle; // 0xa98            
            // metadata: MNotSaved
            float m_SpotRadius; // 0xa9c            
            uint8_t _pad0aa0[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DynamicLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DynamicLight) == 0xab0);
    };
};
