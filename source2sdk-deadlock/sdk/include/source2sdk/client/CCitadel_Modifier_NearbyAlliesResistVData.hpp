#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"

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
        // Size: 0x770
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_NearbyAlliesResistVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            float m_flNearbyAllyResistRange; // 0x750            
            uint8_t _pad0754[0x4]; // 0x754
            // m_flResistValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flResistValues;
            char m_flResistValues[0x18]; // 0x758            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_NearbyAlliesResistVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_NearbyAlliesResistVData) == 0x770);
    };
};
