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
        struct CitadelSpreadPerShotNormalization_t
        {
        public:
            bool m_bNormalizeSpreadPerShot; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            source2sdk::tier2::CRangeFloat m_FireRatePctRange; // 0x4            
            source2sdk::tier2::CRangeFloat m_SpreadPerShotFactor; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelSpreadPerShotNormalization_t, m_bNormalizeSpreadPerShot) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelSpreadPerShotNormalization_t, m_FireRatePctRange) == 0x4);
        static_assert(offsetof(source2sdk::client::CitadelSpreadPerShotNormalization_t, m_SpreadPerShotFactor) == 0xc);
        
        static_assert(sizeof(source2sdk::client::CitadelSpreadPerShotNormalization_t) == 0x14);
    };
};
