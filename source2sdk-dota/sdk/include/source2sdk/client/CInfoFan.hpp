#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"

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
        // Size: 0x648
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoFan : public source2sdk::client::C_PointEntity
        {
        public:
            uint8_t _pad05f0[0x40]; // 0x5f0
            float m_fFanForceMaxRadius; // 0x630            
            float m_fFanForceMinRadius; // 0x634            
            float m_flCurveDistRange; // 0x638            
            uint8_t _pad063c[0x4]; // 0x63c
            CUtlSymbolLarge m_FanForceCurveString; // 0x640            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoFan) == 0x648);
    };
};
