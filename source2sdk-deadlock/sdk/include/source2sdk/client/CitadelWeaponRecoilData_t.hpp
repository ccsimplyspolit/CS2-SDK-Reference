#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/tier2/CRangeFloat.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct CitadelWeaponRecoilData_t
        {
        public:
            source2sdk::tier2::CRangeFloat m_Range; // 0x0            
            float m_flBurstSlope; // 0x8            
            float m_flBurstExponent; // 0xc            
            float m_flBurstConstant; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelWeaponRecoilData_t, m_Range) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelWeaponRecoilData_t, m_flBurstSlope) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelWeaponRecoilData_t, m_flBurstExponent) == 0xc);
        static_assert(offsetof(source2sdk::client::CitadelWeaponRecoilData_t, m_flBurstConstant) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CitadelWeaponRecoilData_t) == 0x14);
    };
};
