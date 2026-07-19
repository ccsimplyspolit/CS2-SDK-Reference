#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierVData.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

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
        class CModifierVData_SetModelScale : public source2sdk::server::CCitadelModifierVData
        {
        public:
            source2sdk::tier2::CRangeFloat m_flScale; // 0x750            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierVData_SetModelScale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierVData_SetModelScale) == 0x758);
    };
};
