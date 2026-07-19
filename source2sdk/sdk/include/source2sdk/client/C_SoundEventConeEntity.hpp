#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_SoundEventEntity.hpp"

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
        // Size: 0x6d8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_SoundEventConeEntity : public source2sdk::client::C_SoundEventEntity
        {
        public:
            float m_flEmitterAngle; // 0x6c0            
            float m_flSweetSpotAngle; // 0x6c4            
            float m_flAttenMin; // 0x6c8            
            float m_flAttenMax; // 0x6cc            
            CUtlSymbolLarge m_iszParameterName; // 0x6d0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundEventConeEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundEventConeEntity) == 0x6d8);
    };
};
