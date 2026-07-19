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
        // Size: 0x658
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoFan : public source2sdk::client::C_PointEntity
        {
        public:
            uint8_t _pad0600[0x40]; // 0x600
            float m_fFanForceMaxRadius; // 0x640            
            float m_fFanForceMinRadius; // 0x644            
            float m_flCurveDistRange; // 0x648            
            uint8_t _pad064c[0x4]; // 0x64c
            CUtlSymbolLarge m_FanForceCurveString; // 0x650            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoFan) == 0x658);
    };
};
