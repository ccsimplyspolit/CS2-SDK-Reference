#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x788
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDynamicLight : public source2sdk::server::CBaseModelEntity
        {
        public:
            std::uint8_t m_ActualFlags; // 0x770            
            std::uint8_t m_Flags; // 0x771            
            std::uint8_t m_LightStyle; // 0x772            
            bool m_On; // 0x773            
            float m_Radius; // 0x774            
            std::int32_t m_Exponent; // 0x778            
            float m_InnerAngle; // 0x77c            
            float m_OuterAngle; // 0x780            
            float m_SpotRadius; // 0x784            
            
            // Datamap fields:
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputToggle; // 0x0
            // Color _light; // 0x7fffffff
            // float pitch; // 0x7fffffff
            // int32_t spawnflags; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDynamicLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDynamicLight) == 0x788);
    };
};
