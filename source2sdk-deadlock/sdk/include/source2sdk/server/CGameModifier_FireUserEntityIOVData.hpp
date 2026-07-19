#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FireUserEntityIO_t.hpp"
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
        // Size: 0x758
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CGameModifier_FireUserEntityIOVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Fire User Entity IO"
            // metadata: MPropertyDescription "User Entity IO to fire when modifier added. 0 = don't fire."
            source2sdk::client::FireUserEntityIO_t m_FireOnAdded; // 0x750            
            // metadata: MPropertyDescription "User Entity IO to fire when modifier removed. 0 = don't fire."
            source2sdk::client::FireUserEntityIO_t m_FireOnRemoved; // 0x754            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameModifier_FireUserEntityIOVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGameModifier_FireUserEntityIOVData) == 0x758);
    };
};
