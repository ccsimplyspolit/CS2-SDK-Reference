#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelItemPickupVData.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x130
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelItemPunchableNeutralGoldVData : public source2sdk::server::CCitadelItemPickupVData
        {
        public:
            float m_flGroundOffset; // 0x108            
            float m_flSpinRate; // 0x10c            
            float m_flBobHeight; // 0x110            
            float m_flBobFrequency; // 0x114            
            float m_flSpinSpeed; // 0x118            
            uint8_t _pad011c[0x4]; // 0x11c
            // metadata: MPropertyStartGroup "Modifiers"
            // m_PunchPickupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PunchPickupModifier;
            char m_PunchPickupModifier[0x10]; // 0x120            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelItemPunchableNeutralGoldVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelItemPunchableNeutralGoldVData) == 0x130);
    };
};
