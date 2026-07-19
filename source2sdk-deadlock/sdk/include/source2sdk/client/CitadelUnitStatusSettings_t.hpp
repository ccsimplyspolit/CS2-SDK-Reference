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
        // static metadata: MModelGameData
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelUnitStatusSettings_t
        {
        public:
            // metadata: MPropertyStartGroup "Unit Status Overlay"
            // metadata: MPropertyFriendlyName "Unit Status Offset (from abs origin)"
            Vector m_vUnitStatusOffset; // 0x0            
            // metadata: MPropertyStartGroup "Healthbar"
            // metadata: MPropertyFriendlyName "Health Bar Offset (from abs origin)"
            Vector m_vHealthbarOffset; // 0xc            
            // metadata: MPropertyStartGroup "Damage Numbers"
            // metadata: MPropertyFriendlyName "Damage Numbers Offset (from abs origin)"
            Vector m_vDamageNumbersOffset; // 0x18            
            // metadata: MPropertyStartGroup "Status Effects"
            // metadata: MPropertyFriendlyName "Status Effects Offset (from abs origin)"
            Vector m_vStatusEffectsOffset; // 0x24            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelUnitStatusSettings_t, m_vUnitStatusOffset) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelUnitStatusSettings_t, m_vHealthbarOffset) == 0xc);
        static_assert(offsetof(source2sdk::client::CitadelUnitStatusSettings_t, m_vDamageNumbersOffset) == 0x18);
        static_assert(offsetof(source2sdk::client::CitadelUnitStatusSettings_t, m_vStatusEffectsOffset) == 0x24);
        
        static_assert(sizeof(source2sdk::client::CitadelUnitStatusSettings_t) == 0x30);
    };
};
