#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CRootMotion.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x6c0
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PerTickSettings_t
        {
        public:
            CTransform m_startingLocalToWorld; // 0x0            
            CTransform m_prevLocalToWorld; // 0x20            
            CTransform m_finalLocalToWorld; // 0x40            
            source2sdk::animgraphlib::CRootMotion m_rootMotion; // 0x60            
            uint8_t _pad0088[0x614]; // 0x88
            std::int32_t m_updateID; // 0x69c            
            uint8_t _pad06a0[0x4]; // 0x6a0
            float m_flLastTimeStep; // 0x6a4            
            float m_flPrevAnimTime; // 0x6a8            
            float m_flNextAnimTime; // 0x6ac            
            uint8_t _pad06b0[0x4]; // 0x6b0
            bool m_bAwaken; // 0x6b4            
            bool m_bTeleported; // 0x6b5            
            bool m_bIsClient; // 0x6b6            
            bool m_bIsPredicted; // 0x6b7            
            uint8_t _pad06b8[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_startingLocalToWorld) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_prevLocalToWorld) == 0x20);
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_finalLocalToWorld) == 0x40);
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_rootMotion) == 0x60);
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_updateID) == 0x69c);
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_flLastTimeStep) == 0x6a4);
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_flPrevAnimTime) == 0x6a8);
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_flNextAnimTime) == 0x6ac);
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_bAwaken) == 0x6b4);
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_bTeleported) == 0x6b5);
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_bIsClient) == 0x6b6);
        static_assert(offsetof(source2sdk::animgraphlib::PerTickSettings_t, m_bIsPredicted) == 0x6b7);
        
        static_assert(sizeof(source2sdk::animgraphlib::PerTickSettings_t) == 0x6c0);
    };
};
