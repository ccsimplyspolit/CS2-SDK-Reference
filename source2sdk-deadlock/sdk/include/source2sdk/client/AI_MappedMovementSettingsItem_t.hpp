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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AI_MappedMovementSettingsItem_t
        {
        public:
            // metadata: MPropertyFlattenIntoParentRow
            CGlobalSymbol m_sMovementSettingsId; // 0x0            
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/basenpc_movementsettings.vdata )"
            CUtlString m_sMovementSettingsName; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AI_MappedMovementSettingsItem_t, m_sMovementSettingsId) == 0x0);
        static_assert(offsetof(source2sdk::client::AI_MappedMovementSettingsItem_t, m_sMovementSettingsName) == 0x8);
        
        static_assert(sizeof(source2sdk::client::AI_MappedMovementSettingsItem_t) == 0x10);
    };
};
