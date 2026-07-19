#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x758
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifier_Upgrade_ArcaneSurge_AbilityWatcher_VData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            float m_flRefreshBuffer; // 0x750            
            uint8_t _pad0754[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Upgrade_ArcaneSurge_AbilityWatcher_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifier_Upgrade_ArcaneSurge_AbilityWatcher_VData) == 0x758);
    };
};
