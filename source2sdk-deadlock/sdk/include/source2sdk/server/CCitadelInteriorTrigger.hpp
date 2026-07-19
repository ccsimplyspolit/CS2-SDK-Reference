#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTriggerModifier.hpp"

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
        // Size: 0x8f8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelInteriorTrigger : public source2sdk::server::CTriggerModifier
        {
        public:
            std::int32_t m_nInteriorType; // 0x8f0            
            CUtlStringToken m_tInteriorModifier; // 0x8f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelInteriorTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelInteriorTrigger) == 0x8f8);
    };
};
