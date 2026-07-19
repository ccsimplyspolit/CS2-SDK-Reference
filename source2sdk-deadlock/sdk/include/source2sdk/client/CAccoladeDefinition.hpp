#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AccoladeID_t.hpp"
#include "source2sdk/client/EAccoladeThresholdType.hpp"
#include "source2sdk/client/ECitadelGameMode.hpp"
#include "source2sdk/client/TrackedStatValue_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x78
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataAssociatedFile
        #pragma pack(push, 1)
        class CAccoladeDefinition
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "_editor/next_accolade_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::AccoladeID_t m_unAccoladeID; // 0x0            
            uint8_t _pad0004[0xc]; // 0x4
            CUtlString m_sTrackedStatName; // 0x10            
            uint8_t _pad0018[0x8]; // 0x18
            CVDataLocalizedToken m_sFlavorName; // 0x20            
            CVDataLocalizedToken m_sDescription; // 0x30            
            source2sdk::client::EAccoladeThresholdType m_eThresholdType; // 0x40            
            uint8_t _pad0044[0x4]; // 0x44
            // m_vecThresholds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::TrackedStatValue_t> m_vecThresholds;
            char m_vecThresholds[0x18]; // 0x48            
            // m_vecEnabledGameModes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ECitadelGameMode> m_vecEnabledGameModes;
            char m_vecEnabledGameModes[0x18]; // 0x60            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAccoladeDefinition, m_unAccoladeID) == 0x0);
        static_assert(offsetof(source2sdk::client::CAccoladeDefinition, m_sTrackedStatName) == 0x10);
        static_assert(offsetof(source2sdk::client::CAccoladeDefinition, m_sFlavorName) == 0x20);
        static_assert(offsetof(source2sdk::client::CAccoladeDefinition, m_sDescription) == 0x30);
        static_assert(offsetof(source2sdk::client::CAccoladeDefinition, m_eThresholdType) == 0x40);
        static_assert(offsetof(source2sdk::client::CAccoladeDefinition, m_vecThresholds) == 0x48);
        static_assert(offsetof(source2sdk::client::CAccoladeDefinition, m_vecEnabledGameModes) == 0x60);
        
        static_assert(sizeof(source2sdk::client::CAccoladeDefinition) == 0x78);
    };
};
