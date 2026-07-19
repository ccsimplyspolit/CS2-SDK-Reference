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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeModelSelfCollisionLayer_t
        {
        public:
            CUtlString m_Name; // 0x0            
            // m_Nodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_Nodes;
            char m_Nodes[0x18]; // 0x8            
            float m_flParentReaction; // 0x20            
            std::uint32_t m_nFlags; // 0x24            
            std::uint32_t m_nEndIdx[4]; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeModelSelfCollisionLayer_t, m_Name) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeModelSelfCollisionLayer_t, m_Nodes) == 0x8);
        static_assert(offsetof(source2sdk::physicslib::FeModelSelfCollisionLayer_t, m_flParentReaction) == 0x20);
        static_assert(offsetof(source2sdk::physicslib::FeModelSelfCollisionLayer_t, m_nFlags) == 0x24);
        static_assert(offsetof(source2sdk::physicslib::FeModelSelfCollisionLayer_t, m_nEndIdx) == 0x28);
        
        static_assert(sizeof(source2sdk::physicslib::FeModelSelfCollisionLayer_t) == 0x38);
    };
};
