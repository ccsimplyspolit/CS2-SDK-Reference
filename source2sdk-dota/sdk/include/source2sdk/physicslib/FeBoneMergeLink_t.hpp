#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeBoneMergeLink_t
        {
        public:
            std::uint32_t m_nParentHash; // 0x0            
            std::uint16_t m_nChildNode; // 0x4            
            uint8_t _pad0006[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeBoneMergeLink_t, m_nParentHash) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeBoneMergeLink_t, m_nChildNode) == 0x4);
        
        static_assert(sizeof(source2sdk::physicslib::FeBoneMergeLink_t) == 0x8);
    };
};
