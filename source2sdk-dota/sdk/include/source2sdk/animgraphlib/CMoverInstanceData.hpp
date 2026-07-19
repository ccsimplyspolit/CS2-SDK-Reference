#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x2c
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMoverInstanceData
        {
        public:
            float m_flDampedValue; // 0x0            
            Vector m_vMovement; // 0x4            
            uint8_t _pad0010[0xc]; // 0x10
            CRotation m_Rotation; // 0x1c            
            CRotation m_TargetOrientation; // 0x20            
            uint8_t _pad0024[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMoverInstanceData, m_flDampedValue) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CMoverInstanceData, m_vMovement) == 0x4);
        static_assert(offsetof(source2sdk::animgraphlib::CMoverInstanceData, m_Rotation) == 0x1c);
        static_assert(offsetof(source2sdk::animgraphlib::CMoverInstanceData, m_TargetOrientation) == 0x20);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMoverInstanceData) == 0x2c);
    };
};
