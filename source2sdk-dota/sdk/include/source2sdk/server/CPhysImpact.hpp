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
        // Size: 0x4a8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysImpact : public source2sdk::server::CPointEntity
        {
        public:
            float m_damage; // 0x498            
            float m_distance; // 0x49c            
            CUtlSymbolLarge m_directionEntityName; // 0x4a0            
            
            // Datamap fields:
            // void InputImpact; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysImpact because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysImpact) == 0x4a8);
    };
};
