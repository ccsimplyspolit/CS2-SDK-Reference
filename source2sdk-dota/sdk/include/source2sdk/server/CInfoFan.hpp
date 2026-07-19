#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoFan : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad0498[0x40]; // 0x498
            float m_fFanForceMaxRadius; // 0x4d8            
            float m_fFanForceMinRadius; // 0x4dc            
            float m_flCurveDistRange; // 0x4e0            
            uint8_t _pad04e4[0x4]; // 0x4e4
            CUtlSymbolLarge m_FanForceCurveString; // 0x4e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoFan) == 0x4f0);
    };
};
