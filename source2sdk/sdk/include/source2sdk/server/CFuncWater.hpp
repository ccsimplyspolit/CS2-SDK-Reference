#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CBuoyancyHelper.hpp"

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
        // Size: 0x888
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncWater : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::server::CBuoyancyHelper m_BuoyancyHelper; // 0x770            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncWater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncWater) == 0x888);
    };
};
