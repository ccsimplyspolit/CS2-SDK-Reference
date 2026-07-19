#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x758
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierObscuredVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            float m_flHideDuration; // 0x750            
            float m_flRevealDuration; // 0x754            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierObscuredVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierObscuredVData) == 0x758);
    };
};
