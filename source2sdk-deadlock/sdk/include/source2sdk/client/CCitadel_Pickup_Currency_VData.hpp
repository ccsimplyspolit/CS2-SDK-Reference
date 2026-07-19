#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Pickup_VData.hpp"
#include "source2sdk/client/ECurrencyType.hpp"

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
        // Size: 0xa08
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Pickup_Currency_VData : public source2sdk::client::CCitadel_Pickup_VData
        {
        public:
            // metadata: MPropertyStartGroup "Currency"
            source2sdk::client::ECurrencyType m_Currency; // 0x9f0            
            std::int32_t m_nCurrencyAmount; // 0x9f4            
            bool m_bPlayCurrencySound; // 0x9f8            
            uint8_t _pad09f9[0x7]; // 0x9f9
            CUtlString m_strLabelName; // 0xa00            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Pickup_Currency_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Pickup_Currency_VData) == 0xa08);
    };
};
