#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ObjectivesParams_t
        {
        public:
            std::int32_t m_GoldPerOrb; // 0x0            
            float m_NearPlayerSplitPct; // 0x4            
            std::int32_t m_nTier1GoldKill; // 0x8            
            std::int32_t m_nTier1GoldOrbs; // 0xc            
            std::int32_t m_nTier2GoldKill; // 0x10            
            std::int32_t m_nTier2GoldOrbs; // 0x14            
            std::int32_t m_nBaseGuardiansGoldKill; // 0x18            
            std::int32_t m_nBaseGuardiansGoldOrbs; // 0x1c            
            std::int32_t m_nShrinesGoldKill; // 0x20            
            std::int32_t m_nShrinesGoldOrbs; // 0x24            
            std::int32_t m_nPatronPhase1GoldKill; // 0x28            
            std::int32_t m_nPatronPhase1GoldOrbs; // 0x2c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_GoldPerOrb) == 0x0);
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_NearPlayerSplitPct) == 0x4);
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_nTier1GoldKill) == 0x8);
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_nTier1GoldOrbs) == 0xc);
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_nTier2GoldKill) == 0x10);
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_nTier2GoldOrbs) == 0x14);
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_nBaseGuardiansGoldKill) == 0x18);
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_nBaseGuardiansGoldOrbs) == 0x1c);
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_nShrinesGoldKill) == 0x20);
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_nShrinesGoldOrbs) == 0x24);
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_nPatronPhase1GoldKill) == 0x28);
        static_assert(offsetof(source2sdk::client::ObjectivesParams_t, m_nPatronPhase1GoldOrbs) == 0x2c);
        
        static_assert(sizeof(source2sdk::client::ObjectivesParams_t) == 0x30);
    };
};
