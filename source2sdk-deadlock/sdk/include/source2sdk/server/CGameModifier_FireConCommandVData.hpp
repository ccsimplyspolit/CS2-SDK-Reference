#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x760
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CGameModifier_FireConCommandVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Fire Con Command"
            // metadata: MPropertyDescription "ConCommand to fire when modifier added."
            CUtlString m_FireOnAdded; // 0x750            
            // metadata: MPropertyDescription "ConCommand to fire when modifier removed."
            CUtlString m_FireOnRemoved; // 0x758            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameModifier_FireConCommandVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGameModifier_FireConCommandVData) == 0x760);
    };
};
