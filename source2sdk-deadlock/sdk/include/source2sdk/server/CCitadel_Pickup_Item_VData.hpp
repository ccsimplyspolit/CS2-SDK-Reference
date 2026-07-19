#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Pickup_VData.hpp"

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
        // Size: 0x9d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Pickup_Item_VData : public source2sdk::server::CCitadel_Pickup_VData
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCitadel_Pickup_Item_VData) == 0x9d8);
    };
};
